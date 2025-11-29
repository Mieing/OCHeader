@class NSString, UIImageView, UILabel, UIView;

@interface DYCountryCodeView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *separationLine;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL isSetToChinese;
@property (copy, nonatomic) id /* block */ didClickCountryCodeArea;
@property (copy, nonatomic) id /* block */ didChangeCountryCode;
@property (copy, nonatomic) id /* block */ contentSizeChangeBlock;

+ (Class)aAWEUserCommonAdapterClass;
+ (Class)aDYPhoneNumberInputViewDOUYINHMAdapterClass;

- (void)updateLabel:(id)a0;
- (void)updateCountryCode:(id)a0;
- (id)aAWEUserCommonAdapter;
- (id)openRegionsArray;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (BOOL)canShowOverseaCurrentPhoneCode;
- (id)aDYPhoneNumberInputViewDOUYINHMAdapter;
- (id)openRegionMap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tapAction;

@end
