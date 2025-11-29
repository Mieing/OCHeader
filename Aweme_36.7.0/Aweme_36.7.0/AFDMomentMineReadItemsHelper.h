@class NSArray, NSString;

@interface AFDMomentMineReadItemsHelper : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSArray *mineReadItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)mineReadItemListKey;
- (BOOL)canGetItemFromMineReadItemsWithUid:(id)a0;
- (BOOL)hasReadItem:(id)a0;
- (void)updateAllReadItemList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
