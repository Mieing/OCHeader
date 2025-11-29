@class AWEPlayInteractionSocialTagsView, AWEMarkView, UIView, AWEAwemeModel, AWEGradientView;
@protocol AWEPOIEntryAnchorViewManagerProtocol, AWEMultiAnchorExtendViewProtocol, AWEFeedRelationViewProtocol, AWEFeedAnchorViewBehaviorProtocol;

@interface AWENearbySkyLightAnchorContainerView : UIView

@property (retain, nonatomic) id<AWEPOIEntryAnchorViewManagerProtocol> poiAnchorManager;
@property (retain, nonatomic) UIView<AWEMultiAnchorExtendViewProtocol, AWEFeedAnchorViewBehaviorProtocol> *poiView;
@property (retain, nonatomic) UIView<AWEFeedRelationViewProtocol> *relationView;
@property (retain, nonatomic) AWEMarkView *distanceView;
@property (retain, nonatomic) AWEPlayInteractionSocialTagsView *socialTagsView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (copy, nonatomic) id /* block */ clickPOIInfoBlock;

- (void)__setupUI;
- (void)updatePOIInfoWithAwemeModel:(id)a0;
- (void)updateAnchorContentLayoutWithScaleFeed:(BOOL)a0;
- (void)trackShowNearbySkyLightAnchor;
- (void)__clickPOIInfoAction:(id)a0;
- (void)distanceViewChangeInteraction;
- (double)__leftContainerWidth;
- (BOOL)__shouldShowPOIInfoWithModel:(id)a0;
- (BOOL)__shouldShowSocialTagsWithModel:(id)a0;
- (BOOL)__shouldShowRelationInfoWithModel:(id)a0;
- (BOOL)__shouldShowDistanceInfoWithModel:(id)a0;
- (long long)skylightAnchorType;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
