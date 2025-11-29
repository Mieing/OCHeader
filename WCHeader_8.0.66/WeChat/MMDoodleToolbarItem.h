@interface MMDoodleToolbarItem : MMUIButton

- (id)initWithSVGImageName:(id)a0;
- (id)normalBackgroundImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)selectedBackgroundImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)disabledBackgroundImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNormalSVGImageName:(id)a0;
- (void)setSelectedSVGImageName:(id)a0;
- (void)setDisabledSVGImageName:(id)a0;

@end
