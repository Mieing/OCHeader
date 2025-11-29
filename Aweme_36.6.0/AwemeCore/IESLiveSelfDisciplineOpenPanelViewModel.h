@class NSString, IESLiveSelfDisciplineOpenPanelView, HTSEventContext, IESLivePopupItem;

@interface IESLiveSelfDisciplineOpenPanelViewModel : NSObject

@property (copy, nonatomic) NSString *selectedTarget;
@property (nonatomic) long long selectDuration;
@property (nonatomic) BOOL isButtonAvailable;
@property (retain, nonatomic) IESLiveSelfDisciplineOpenPanelView *view;
@property (retain, nonatomic) IESLivePopupItem *targetSelectPanel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)onConfirmButtonClicked;
- (id)topicArray;
- (void)bindView:(id)a0;
- (void)stopSelfDiscipline;
- (id)initWithDiContext:(id)a0 trackContext:(id)a1;
- (void)refreshDefaultTarget;
- (void)onDescClicked;
- (void)didSelectTopic:(id)a0;
- (void)didSelectDuration:(id)a0;
- (void)p_resetButtonAvailable;
- (void)p_hideSelfDisciplineOpenPanel;
- (void)showRoomIntroductionPanel;
- (void)tr_trackThemeClick:(id)a0;
- (void)p_reshowSelfDisciplineOpenPanel;
- (void)p_hideSelfDisciplineTargetSelectPanel;
- (void).cxx_destruct;
- (id)durationList;

@end
