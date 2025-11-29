@class WCPayWebImageView, MMUILabel, CAGradientLayer, UIView, PageTicketElement;
@protocol WCMktInvalidTicketItemCellDelegate;

@interface WCMktInvalidTicketItemCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) PageTicketElement *elemData;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *tagListView;
@property (retain, nonatomic) WCPayWebImageView *cardBackgroundView;
@property (retain, nonatomic) UIView *mktMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<WCMktInvalidTicketItemCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateContentWithInvalidTicketElemData:(id)a0;
- (id)genTagButtonWithTagData:(id)a0;
- (void)genContainerView;
- (void)genLogoImgView;
- (void)genTitleLabel;
- (void)genDescLabel;
- (void)genCardBackgroundView;
- (void)genMktMaskView;
- (void)genGradientLayer;
- (void).cxx_destruct;

@end
