@class UILabel, AWESearchCustomTagComponentModel;

@interface AWESearchCustomTagView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWESearchCustomTagComponentModel *model;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;
+ (id)textLabelFontWithModel:(id)a0;

- (void)configDataWithModel:(id)a0;
- (id)getColorWithColorString:(id)a0;
- (BOOL)existRGBString:(id)a0;
- (id)rgbaStringToHex:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
