@interface MMFinderLivePivotScrollDownEducationViewModel : MMFinderLivePivotEducationViewModel

@property (nonatomic) double tipsHeight;
@property (nonatomic) double tipsAlpha;

- (void)onScrollViewDidScroll:(id)a0;
- (double)backgroundViewY;
- (double)tipsViewMaxHeight;
- (double)tipsViewDefaultHeight;
- (double)arrowIconTop;
- (double)tipsTop;
- (id)arrowImageName;
- (id)tipsString;

@end
