@class AWEAwemeModel, UIView, NSAttributedString, AWERelatedRecommendAnchorView, NSString, AWEFeedCollectionContainerContext, AWERelatedRecommendAnchorActionManager, BDUGFlowAuthToken, YYLabel, AWEVideoDescriptionPanelAuthorView;
@protocol AWECommentVCHeaderBarComponentProtocol;

@interface AWEVideoDescriptionPanelHeaderView : UIView <AWEVideoDescriptionPanelAuthorViewDelegate>

@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) AWEVideoDescriptionPanelAuthorView *authorView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;
@property (retain, nonatomic) BDUGFlowAuthToken *token;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) AWERelatedRecommendAnchorView *weakAnchorView;
@property (retain, nonatomic) UIView<AWECommentVCHeaderBarComponentProtocol> *barComponent;
@property (retain, nonatomic) UIView *anchorView;
@property (copy, nonatomic) NSAttributedString *timeAttributedString;
@property (nonatomic) double anchorTopOffset;
@property (nonatomic) double descBottomOffset;
@property (retain, nonatomic) AWERelatedRecommendAnchorActionManager *anchorActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (double)getContentHeight;
- (void)authorInfoClicked:(id)a0 clickType:(long long)a1;
- (void)trackAnchorViewShowIfNeeded;
- (id)getDesContent;
- (void)updateRelatedRecommendDCStyleByModel:(id)a0 referString:(id)a1 interactionViewController:(id)a2;
- (id)themeColorTransformedFrom:(id)a0;
- (void)updateDescriptionLabel;
- (BOOL)isEntityWordSearchNSLink:(id)a0;
- (void)updateAuthorView;
- (BOOL)updateBarComponentWithModel:(id)a0;
- (void)updateWeakAnchorViewIfNeeded;
- (void)addAnchorViewIfNeeded:(id)a0;
- (BOOL)enableSpaceOpt;
- (BOOL)shouldShowWeakAnchorView;
- (double)weakViewHeight;
- (struct CGSize { double x0; double x1; })descriptionLabelSize;
- (double)getDescLabelBottomSpace;
- (BOOL)hasTopAIParseTitleElement;
- (BOOL)canShowDCTabListSegmentControl;
- (BOOL)shouldShowAnchorView:(id)a0;
- (void)addWeakAnchorViewIfNeeded;
- (BOOL)needShowIP:(id)a0;
- (void)updateOldDescriptionLabelStyle:(id)a0;
- (void)didTapWeakAnchorView:(id)a0;
- (double)interactionZoneBottomOffset;
- (unsigned long long)descriptionLabelAllRows;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateSubviews;
- (void)updateWithContext:(id)a0;
- (void)updateTimeLabel;

@end
