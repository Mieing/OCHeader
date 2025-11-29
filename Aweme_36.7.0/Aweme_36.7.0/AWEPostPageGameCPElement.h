@class NSString, NSDictionary;

@interface AWEPostPageGameCPElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)p_addBindSignObserver;
- (void)setupUIForAnchor;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (void)reportTrackerWithEvent:(id)a0 extra:(id)a1;
- (id)traceReeditParams;
- (void)reportAnchorEntranceShowTrackerIfNeed;
- (void)addGameCPAnchorNotification:(id)a0;
- (void)addGameCPAnchorTopicNotification:(id)a0;
- (void)reportMultiAnchorEntranceShowTracker;
- (void)reportGeneralAnchorEntranceShowTracker;
- (id)getGameCPAnchorPublishModel;
- (long long)p_currentAnchorScene;
- (void)p_checkPassiveAnchor;
- (void)configCPTraceServiceBaseInfo;
- (id)service;
- (BOOL)isVisible;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)addObservers;

@end
