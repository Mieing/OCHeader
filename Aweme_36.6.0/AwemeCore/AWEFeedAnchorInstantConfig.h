@class UIView;
@protocol AWEInstantAnchorProtocol;

@interface AWEFeedAnchorInstantConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) UIView<AWEInstantAnchorProtocol> *instantAnchorView;
@property (nonatomic) BOOL isShowSuffix;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (void)setIsUpdatingAddress:(BOOL)a0 froAwemeMode:(id)a1;
+ (void)updateAddressWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (BOOL)getIsUpdatingAddressWithAwemeModel:(id)a0;
+ (void)fetchStoreListWithShopId:(id)a0 productId:(id)a1 awemeModel:(id)a2 aweECService:(id)a3 completion:(id /* block */)a4;
+ (void)fetchAnchorInfoWithShopId:(id)a0 storeId:(id)a1 subProductId:(id)a2 awemeModel:(id)a3 isFallback:(BOOL)a4 needAddress:(BOOL)a5 aweECService:(id)a6 completion:(id /* block */)a7;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (id)anchorInfoExtra;
- (void)reportSDKUpdate;
- (void)showInstantAnchorTowLine;
- (void)showInstantExtraTagsWithPlayBackTime:(double)a0;
- (void)showInstantExtraTagsWithLoopTimes:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)updateTags;

@end
