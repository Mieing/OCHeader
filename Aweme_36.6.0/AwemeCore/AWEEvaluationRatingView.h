@class UIImage, NSMutableArray, UIView;
@protocol AWEEvaluationRatingViewDelegate;

@interface AWEEvaluationRatingView : UIView

@property (retain, nonatomic) UIView *starContainerView;
@property (retain, nonatomic) NSMutableArray *starViewArray;
@property (retain, nonatomic) UIImage *filledImage;
@property (retain, nonatomic) UIImage *emptyImage;
@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double starSpace;
@property (nonatomic) double rate;
@property (weak, nonatomic) id<AWEEvaluationRatingViewDelegate> delegate;

- (void)updateWithRate:(double)a0;
- (void)onImageTaped:(id)a0;
- (void)addStars;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
