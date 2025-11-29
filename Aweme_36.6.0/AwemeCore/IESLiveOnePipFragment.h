@class NSString, IESLiveOnePipPreferenceOptionsModel, IESLiveOnePipLiveSmallWindowStore, IESLiveOnePipBizSmallWindowStore;

@interface IESLiveOnePipFragment : IESLiveRoomComponent <IESLiveOnePipLiveRoomService>

@property (retain, nonatomic) IESLiveOnePipBizSmallWindowStore *bizSmallWindow;
@property (retain, nonatomic) IESLiveOnePipLiveSmallWindowStore *liveSmallWindow;
@property (retain, nonatomic) IESLiveOnePipPreferenceOptionsModel *preferenceOptionsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (BOOL)isShowingPipSupportOutPip;
- (void)registerPreferenceOptionsModel:(id)a0 bizTag:(id)a1;
- (BOOL)isCurrentForbidOutPip;
- (void).cxx_destruct;

@end
