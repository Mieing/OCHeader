@class NSString, UIImageView, IESLiveGuideContentPanelModel, UILabel;
@protocol IESLivePerfSampler;

@interface IESLiveGuideCategoryView : UIView <IESLiveAnchorOptCategoryActions, IESLiveGuideActions, IESLiveAnchorGuideInteractiveSceneAction>

@property (retain, nonatomic) IESLiveGuideContentPanelModel *viewModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL isInToolBar;
@property (nonatomic) unsigned long long audioInteractiveScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showCategoryView;
- (void)bindActions;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)dismissOptCategoryContainer;
- (void)didSelectSubscene:(unsigned long long)a0;
- (void)didJoinedGuideCategory:(id)a0;
- (void)didSelectedGuideCategory:(id)a0;
- (void)changeCategoryTitle:(id)a0;
- (id)currentCategoryLabel;
- (void)clickCategoryView;
- (void)changeCategory:(id)a0;
- (BOOL)shouldUseCategoryOptimizeAB;
- (void)setupUIInToolBar;
- (id)initWithModel:(id)a0 isInToolBar:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)defaultTitle;

@end
