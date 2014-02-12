#import <Foundation/Foundation.h>
@class BNRItem;

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
}

+ (BNRItemStore *)defaultStore;
- (NSArray *)allItems;
- (BNRItem *)createItem;

@end
