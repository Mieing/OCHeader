@class WCPayWebImageView, PageTicketJumpElement, MMUILabel, UIImageView, UIView, CAGradientLayer, PageTicketElement;
@protocol WCMktTicketItemCellDelegate;

@interface WCMktTicketItemCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) PageTicketElement *elemData;
@property (retain, nonatomic) PageTicketJumpElement *jumpElemData;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UIView *tagListView;
@property (retain, nonatomic) WCPayWebImageView *cardBackgroundView;
@property (retain, nonatomic) UIView *mktMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<WCMktTicketItemCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateContentWithTicketElemData:(id)a0;
- (id)genTagButtonWithTagData:(id)a0;
- (void)updateContentWithJumpElemData:(id)a0;
- (void)genContainerView;
- (void)genLogoImgView;
- (void)genTitleLabel;
- (void)genDescLabel;
- (void)genCardBackgroundView;
- (void)genMktMaskView;
- (void)genGradientLayer;
- (void).cxx_destruct;

@end
