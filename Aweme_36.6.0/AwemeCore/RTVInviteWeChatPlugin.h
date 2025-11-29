@class UITapGestureRecognizer, NSString, UIImageView, UIView, UILabel, RTVFeedTracker;
@protocol RxInjector, RTVTopViewControllerInterface, RTVXRRoomSessionControllerInterface, RTVXRStateRecorder, RTVXRControllerInjector, RTVVoipResourceFetcherInterface, RTVUserProfileManagerInterface, RTVListViewControllerPluginDelegate;

@interface RTVInviteWeChatPlugin : UIView <RTVXRControllerInterface, RTVListViewControllerPlugin>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> model;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) id<RTVTopViewControllerInterface> topGetter;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVFeedTracker *tracker;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *titleLable;
@property (readonly, nonatomic) UIImageView *indicatorImageView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVListViewControllerPluginDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__createDependency;
- (void)__inviteWeChatTap:(id)a0;
- (id)__dismissListViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)loadContentView;
- (double)contentViewHeight;

@end
