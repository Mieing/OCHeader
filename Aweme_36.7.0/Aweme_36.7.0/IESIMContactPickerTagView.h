@class UILabel;

@interface IESIMContactPickerTagView : UIView

@property (retain, nonatomic) UILabel *internalLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentIntrinsicContentSize;

- (void)configWithText:(id)a0 textColor:(id)a1 backgroundColor:(id)a2;
- (void)p_updateSelfWidth;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
