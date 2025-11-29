@class UIColor, NSString, UIFont, NSMutableArray;

@interface VoiceRecordArcLabel : UIView

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double centerAngle;
@property (retain, nonatomic) NSMutableArray *layerArray;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 font:(id)a2 textColor:(id)a3 centerAngle:(double)a4;
- (void)updateTextColor:(id)a0 font:(id)a1;
- (void)displayText;
- (void)drawCurvedString:(id)a0 angle:(double)a1 radius:(double)a2;
- (void).cxx_destruct;

@end
