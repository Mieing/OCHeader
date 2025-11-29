@class IESLiveUnitedMatrixRequest, NSString, IESLiveMatrixEntranceView;

@interface IESLiveUnitedMatrixFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveMatrixEntranceView *matrixEntrance;
@property (retain, nonatomic) IESLiveUnitedMatrixRequest *requestManager;
@property (nonatomic) BOOL isLandscapeEnterInnerLive;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)refreshEntranceShowState;
- (void)inquireMatrixEntrance;
- (void)updateEntranceHiddenState:(BOOL)a0;
- (void)openMatrixDetailPage;
- (void)insertMatrixToolbarItem;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
