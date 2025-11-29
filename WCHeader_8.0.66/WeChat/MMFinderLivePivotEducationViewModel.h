@class NSString;
@protocol MMFinderLivePivotEducationViewModelDelegate;

@interface MMFinderLivePivotEducationViewModel : NSObject

@property (nonatomic) double tipsHeight;
@property (nonatomic) double tipsAlpha;
@property (readonly, nonatomic) double backgroundViewY;
@property (readonly, nonatomic) double arrowIconTop;
@property (readonly, nonatomic) double tipsTop;
@property (readonly, nonatomic) NSString *arrowImageName;
@property (readonly, nonatomic) NSString *tipsString;
@property (weak, nonatomic) id<MMFinderLivePivotEducationViewModelDelegate> delegate;

- (void)onScrollViewDidScroll:(id)a0;
- (double)tipsViewMaxHeight;
- (double)tipsViewDefaultHeight;
- (void).cxx_destruct;

@end
