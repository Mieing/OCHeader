@class UIFont, NSString, UILabel, NSMutableAttributedString;

@interface AFDRoundSpeedButton : UIButton <AFDRoundSpeedButtonProtocol>

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) NSMutableAttributedString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapSpeed:(double)a0;
- (id)createAttributedStringWithText:(id)a0;
- (void)changeSpeed:(double)a0;
- (id)initWithViewWidth:(double)a0 textFont:(id)a1;
- (void).cxx_destruct;
- (void)setUpUI;

@end
