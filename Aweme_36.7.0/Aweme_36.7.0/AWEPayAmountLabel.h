@class UIFont, NSString, UIColor, UILabel;

@interface AWEPayAmountLabel : UIView

@property (retain, nonatomic) UILabel *preLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *preTextFont;
@property (nonatomic) double space;
@property (copy, nonatomic) NSString *preText;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;

- (id)getAmountStr;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
