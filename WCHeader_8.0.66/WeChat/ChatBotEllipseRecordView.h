@class UIColor, UILabel;

@interface ChatBotEllipseRecordView : UIView

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *hintLabel;

- (id)init;
- (void)setActive:(BOOL)a0;
- (void)updateColor:(id)a0;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutHintLabel;
- (void).cxx_destruct;

@end
