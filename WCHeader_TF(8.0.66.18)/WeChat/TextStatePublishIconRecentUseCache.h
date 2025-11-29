@class NSMutableArray;

@interface TextStatePublishIconRecentUseCache : NSObject

@property (retain, nonatomic) NSMutableArray *privateItemList;

- (id)init;
- (BOOL)addItem:(id)a0;
- (BOOL)removeItem:(id)a0;
- (id)itemList;
- (id)mmkv;
- (void).cxx_destruct;

@end
