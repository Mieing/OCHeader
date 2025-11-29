@class UILabel, NSString, UIView;

@interface AWEBasicModeSegmentElement : AWEBasicModeFakeElement

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *selectedLineView;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL selected;

- (void)p_setup;
- (id)generateLineView;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (id)textColor;

@end
