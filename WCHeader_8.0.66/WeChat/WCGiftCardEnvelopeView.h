@class WCPreGiftCardData, UILabel, MMWebImageView, UIButton;

@interface WCGiftCardEnvelopeView : MMUIView

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *fromUserNameLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *moreDetailButton;
@property (retain, nonatomic) UIButton *seeOtherButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) MMWebImageView *rightImageView;
@property (retain, nonatomic) MMWebImageView *giftBackGroundView;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ acceptBlock;
@property (retain, nonatomic) WCPreGiftCardData *preCardData;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setCloseDidClicked:(id /* block */)a0;
- (void)setAcceptDidClicked:(id /* block */)a0;
- (void)closeButtonDidClicked;
- (void)acceptButtonDidClicked;
- (void)seeOtherButtonDidClicked;
- (void)event:(id)a0;
- (void).cxx_destruct;

@end
