@class NSDictionary, NSString, AWEShareContext;
@protocol IESLiveDouPlusService, IESLiveLongPressViewModelReation, IESLiveEffectAdService;

@interface AWELiveLongPressOuterMenuProvider : NSObject <IESLiveLongPressOuterMenuProvider>

@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (retain, nonatomic) id<IESLiveEffectAdService> effectAdService;
@property (retain, nonatomic) AWEShareContext *liveShareContext;
@property (retain, nonatomic) NSDictionary *trackContext;
@property (weak, nonatomic) id<IESLiveLongPressViewModelReation> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShareToStoryTrackingParams:(id)a0;
- (void)showAwemeStyleLongPressPanelWithRoom:(id)a0 actionArray:(id)a1 allowShare:(BOOL)a2 trackParams:(id)a3;
- (id)getDuxUIImage:(id)a0;
- (void)addRecommendToFriendModelIfNeed:(id /* block */)a0;
- (void)resortOperationFunModelsWithRoomModel:(id)a0;
- (id)longPressPanelRecommendItemText;
- (void)fetchRecommandFriendsApiWithParms:(id)a0 completion:(id /* block */)a1;
- (void)fetchCancelRecommandApiWithParms:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommandApiWithRecommand:(BOOL)a0 WithParams:(id)a1 completion:(id /* block */)a2;
- (void)fetchRecommendLabelWithParams:(id)a0 completion:(id /* block */)a1;
- (id)familiarRecommendEntranceInPanelIconURLs:(BOOL)a0;
- (BOOL)queryRecommendStateInCache:(id)a0;
- (void)addRecommendStateIntoCache:(id)a0;
- (void)removeRecommendStateIntoCache:(id)a0;
- (BOOL)longPressPannelShowing;
- (BOOL)queryLocalPromotionState;
- (void)openDouPlusWithUrl:(id)a0 anchorID:(id)a1;
- (void)queryForLiveLongPressDouPlusUrl:(id)a0 roomID:(id)a1 entranceType:(id)a2 completion:(id /* block */)a3;
- (id)getMoreIconText;
- (id)p_awemeWithLiveRoom:(id)a0;
- (void)trackADLiveShareWithLiveRoom:(id)a0 ownerUserID:(id)a1 trackDict:(id)a2;
- (void)shareToUser:(id)a0 aweRoomModel:(id)a1 trackDict:(id)a2;
- (void)constructShareContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)isShowLongPressSpecialItem:(id)a0;
- (void)shareToUser:(id)a0 liveRoom:(id)a1 trackDict:(id)a2;
- (void)insertRecommendModel:(id)a0 forRoom:(id)a1;
- (void)injectOuterMenuItemsWithPanelModel:(id)a0 roomModel:(id)a1 trackContext:(id)a2 dismissAction:(id /* block */)a3;
- (id)customOperationFunModelsWithRoomModel:(id)a0 isInRoom:(BOOL)a1;
- (id)customOperationAwemeStyleFunModelsWithRoomModel:(id)a0 isInRoom:(BOOL)a1 trackParams:(id)a2;
- (void)fetchRecommandStateApiWithParms:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
