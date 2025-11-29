@class NSString, MMUILabel, MMUIButton;

@interface TextStateCardListFooterView : UIView

@property (retain, nonatomic) MMUILabel *footnoteLabel;
@property (retain, nonatomic) MMUIButton *publishButton;
@property (retain, nonatomic) NSString *footnote;
@property (nonatomic) BOOL showPublishEntry;
@property (copy, nonatomic) id /* block */ tapPublishButtonHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTapPublishButton;
- (void).cxx_destruct;

@end
