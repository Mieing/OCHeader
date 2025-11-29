@class UILabel, UIColor, NSString;

@interface WCPayBadgeView : UIView

@property (retain, nonatomic) UILabel *m_textLabel;
@property (retain, nonatomic) UIColor *m_textColor;
@property (retain, nonatomic) NSString *m_textString;
@property (nonatomic) double m_maxWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMaxWidth:(double)a0;
- (void)updateFontColor:(id)a0;
- (void)updateText:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateTextLabel;
- (void).cxx_destruct;

@end
