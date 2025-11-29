@class NSString, UIViewController;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol, AWEHangoutTopTabContainerProtocol;

@interface AWEFeedHangoutChannelController : NSObject <AWEHangoutChannelControllerProtocol, AWEHPChannelControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEHangoutTopTabContainerProtocol> *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadFullPageAdapterClass;

- (void)channelTopTabDidSelect;
- (id)pageAbility;
- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)a0;
- (id)hangoutTopTabName;
- (void)generateHangoutPinTopTaskWithComponentID:(id)a0 completion:(id /* block */)a1;
- (void)triggerChannelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)notifyContentViewControllerLoadFinished;
- (void)triggerChannelRefreshWithModel:(id)a0;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTopTabContainerDidAppear;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (id)topBarAbility;
- (id)editAbility;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (BOOL)channelCanLandingTabWithParams:(id)a0;
- (void)channelLandingTabWithModel:(id)a0;
- (void)channelEndLandingTabWithModel:(id)a0;
- (void)channelTrackRefreshWithModel:(id)a0;
- (BOOL)showTopTabRefreshAnimationWithModel:(id)a0;
- (void)channelRefreshGestureRecognizerBegin:(id)a0;
- (void)channelRefreshGestureRecognizerEnd:(id)a0;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (void)channel:(id)a0 startPreload:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getContentViewController;
- (id)tabItemAbility;
- (id)bubbleAbility;
- (id)aAWEPadFullPageAdapter;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (long long)currentTabIndex;

@end
