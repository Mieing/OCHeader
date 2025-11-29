@class UILabel, UIFont, UIView;

@interface MMLiveScrollDigitView : UIView {
    double _oneDigitHeight;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *label;
@property (readonly, nonatomic) unsigned long long digit;
@property (retain, nonatomic) UIFont *digitFont;

- (void)setDigitAndCommit:(unsigned long long)a0;
- (void)setDigit:(unsigned long long)a0 from:(unsigned long long)a1;
- (id)attrStringFromStr:(id)a0;
- (void)setDigitFromLast:(unsigned long long)a0;
- (void)setDigitFast:(unsigned long long)a0;
- (void)setRandomScrollDigit:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)commitChange;
- (void)didConfigFinish;
- (void).cxx_destruct;

@end
