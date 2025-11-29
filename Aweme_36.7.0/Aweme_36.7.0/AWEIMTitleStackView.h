@class UILabel, NSString, UIView;

@interface AWEIMTitleStackView : UIStackView <IESIMTitleStackViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *extContainer;
@property (retain, nonatomic) UILabel *extTitleLabel;
@property (nonatomic) double subTitleFontSize;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleAttributedStringWithContent:(id)a0;
+ (id)titleAttributedStringWithContent:(id)a0;
+ (id)subtitleAttributedStringWithContent:(id)a0 fontSize:(double)a1;
+ (id)titleAttributedStringWithContent:(id)a0 lineBreakMode:(long long)a1;
+ (id)extTitleAttributedStringWithContent:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
