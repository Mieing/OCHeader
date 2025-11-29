@class NSString, NSMutableArray;

@interface IESLiveAnchorPerfFragment : IESLiveRoomComponent <IESLiveAnchorPFEntryService, IESLiveAnchorPFBizListService, IESLiveAnchorPFListObserver, IESLiveAnchorPFProcessDelegate>

@property (retain, nonatomic) NSMutableArray *processClasses;
@property (retain, nonatomic) NSMutableArray *processInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)getEntryView;
- (void)displayAudioPunish;
- (void)setupProcessClasses;
- (void)setupProcessInstances;
- (void)startProcessInstances;
- (void)trackEntryViewShow;
- (void)endProcessInstances;
- (void)trackPfListViewShow;
- (void)pfBizListMicrophoneStatusViewDidTapped;
- (void)trackEntryViewClick;
- (void)pfListViewDidAppear;
- (void)entryViewDidTapped;
- (void).cxx_destruct;

@end
