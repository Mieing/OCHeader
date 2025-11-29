@class HTSEventContext, TabResponse, NSString, TabItem, IESLiveFeedDrawerViewControllerContext, UIViewController, NSNumber, HTSLiveVerticalTypeInfo;
@protocol IESLiveRoomService, IESLiveCommerceFeedDrawerListProtocol, IESLiveFeedViewControllerDelegate;

@interface IESLiveFeedDrawerListContainerController : UIViewController <IESLiveCommerceFeedDrawerListDelegate, IESLiveDrawerFeedControllerProtocol>

@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) TabItem *tabConfig;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) HTSLiveVerticalTypeInfo *typeInfo;
@property (retain, nonatomic) UIViewController<IESLiveCommerceFeedDrawerListProtocol> *feedDrawerListViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *appearRefreshInterval;
@property (weak, nonatomic) id<IESLiveFeedViewControllerDelegate> delegate;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;

+ (id)viewControllerForTab:(id)a0;

- (void)refreshLayout:(BOOL)a0;
- (void)updateRoomService:(id)a0;
- (void)trackAppear;
- (BOOL)canHideWithGesture;
- (id)initWithTabModel:(id)a0;
- (void)sendDidSelectedSection;
- (void)updateCurrentVerticalInfo:(id)a0 roomId:(id)a1;
- (void)sendDidUnSelectedSection;
- (void)refreshByClickedTab;
- (void)enterLiveRoomWithDic:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)isRefreshing;
- (BOOL)hasData;

@end
