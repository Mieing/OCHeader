@class HTSLiveToolbarItem, NSString;
@protocol IESLiveLongPressOuterMenuProvider;

@interface IESLiveRecommendFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler>

@property (retain, nonatomic) HTSLiveToolbarItem *recommendItem;
@property (retain, nonatomic) id<IESLiveLongPressOuterMenuProvider> outerMenuProvider;
@property (nonatomic) BOOL hasRecommend;
@property (nonatomic) BOOL recommendActionFromRecommendGuide;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)isMediaRoom;
- (BOOL)shouldShowRecommend;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)performRecommendGuideWithCompletion:(id /* block */)a0 hasRecommend:(BOOL)a1;
- (void)setupRecommendItemWithInitialItem:(id)a0;
- (void)trackShowRecommend;
- (void)trackRecommendToFriends;
- (void)trackRecommendGuideShow;
- (void).cxx_destruct;

@end
