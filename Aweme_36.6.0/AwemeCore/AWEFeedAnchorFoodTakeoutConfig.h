@class UIView;
@protocol AWEFoodTakeoutAnchorProtocol;

@interface AWEFeedAnchorFoodTakeoutConfig : AWEFeedAnchorBaseConfig

@property (retain, nonatomic) UIView<AWEFoodTakeoutAnchorProtocol> *anchorView;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (void)fetchAnchorInfoWith:(id)a0 updateAnchorInfo:(id)a1 completion:(id /* block */)a2;
+ (void)fetchStoreListWith:(id)a0 completion:(id /* block */)a1;
+ (void)updateAnchorInfoWith:(id)a0 completion:(id /* block */)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)reportSubPidShow;
- (id)anchorInfoExtra;
- (void)handleClickAnchor;
- (void).cxx_destruct;
- (void)reset;

@end
