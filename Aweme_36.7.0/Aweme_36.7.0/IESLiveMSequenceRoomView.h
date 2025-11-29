@class RACDisposable, HTSLiveMSequenceStore, IESLiveMSequenceAnchorItem, IESLiveMSequenceProgrammeView;

@interface IESLiveMSequenceRoomView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) HTSLiveMSequenceStore *store;
@property (retain, nonatomic) IESLiveMSequenceAnchorItem *authorBtn;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveMSequenceProgrammeView *programmeView;

- (void)didSetAttachingDIContext;
- (void)updateFollowStatus;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)unmount;
- (void)updateUserData;
- (void)setFollowButtonHighlighted:(BOOL)a0;
- (void)updateProgrammeContent:(id)a0 countDownTime:(long long)a1 countDownMsg:(id)a2;
- (void)startAnchorViewAnimation:(id)a0 duration:(long long)a1 isMseqAudience:(BOOL)a2;
- (void)programmeViewTapped;
- (void)pr_addObserve;
- (void)addCurrentView:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (void)dealloc;
- (void)setupButtons;

@end
