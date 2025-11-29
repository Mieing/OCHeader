@class HTSEventContext, IESLiveGuideModel, UIImageView, UILabel, ListCategoryResponse_CategoryNode, NSString;
@protocol IESLivePerfSampler;

@interface IESLiveGuideCategoryOptView : UIView <IESLiveAnchorOptCategoryActions, IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) unsigned long long audioInteractiveScene;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedCategory;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showCategoryView;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)dismissOptCategoryContainer;
- (id)initWithModel:(id)a0 trackContext:(id)a1;
- (void)didJoinedGuideCategory:(id)a0;
- (void)didSelectedGuideCategory:(id)a0;
- (void)changeCategoryTitle:(id)a0;
- (id)currentCategoryLabel;
- (void)clickCategoryView;
- (void)changeCategory:(id)a0;
- (BOOL)shouldUseCategoryOptimizeAB;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)defaultTitle;

@end
