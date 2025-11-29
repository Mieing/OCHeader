@class UIColor;

@interface BDXPickerView : UIView

@property (nonatomic) double height;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) UIColor *fontColor;
@property (nonatomic) double fontWeight;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *borderColor;

- (void)addPickerColumn:(id)a0;
- (void)updateFrameWithDirection:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
