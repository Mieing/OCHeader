@class IESLiveSelfDisciplinePanelTopicView, IESLiveSelfDisciplineOpenPanelViewModel, IESLiveSelfDisciplineDurationSelectorView;

@interface IESLiveSelfDisciplinePanelContentView_v2 : UIView

@property (retain, nonatomic) IESLiveSelfDisciplinePanelTopicView *topicSelectorView;
@property (retain, nonatomic) IESLiveSelfDisciplineDurationSelectorView *durationSelectorView;
@property (weak, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *viewModel;

- (id)initWithViewModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
