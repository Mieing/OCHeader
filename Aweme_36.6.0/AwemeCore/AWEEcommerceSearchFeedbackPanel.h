@class UIStackView, NSMutableDictionary, AWEDoubleColumnSearchMerchandiseModel, NSString, AWEEcommerceSearchFindSimilarView, UILabel, UIButton;
@protocol AWEEcommerceSearchFeedbackPanelDislikeDelegate;

@interface AWEEcommerceSearchFeedbackPanel : UIView <AWEEcommerceSearchFeedbackPanelProtocol>

@property (retain, nonatomic) UIStackView *feedbackButtonStackView;
@property (retain, nonatomic) AWEEcommerceSearchFindSimilarView *findSimilarView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *feedbackFinishLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) NSMutableDictionary *trackCommonDict;
@property (weak, nonatomic) id<AWEEcommerceSearchFeedbackPanelDislikeDelegate> delegate;
@property (nonatomic) BOOL hasSidebar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickDislikeButton:(id)a0;
- (void)clickFindSimilarViewWithImage:(id)a0;
- (void)clickPanel:(id)a0;
- (void)trackFeedbackEntranceShow;
- (void)panelDisappearAnimate;
- (void)trackFeedbackEntranceClickWithDislikeInfo:(id)a0;
- (void)trackSearchSimilarEntranceClick;
- (void)clickCloseButton:(id)a0;
- (void)panelAppearAnimate;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
