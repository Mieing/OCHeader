@class UILabel, NSMutableArray;
@protocol AWEPOIDetailRatingContainerViewDelegate;

@interface AWEPOIDetailRatingContainerView : UIView

@property (retain, nonatomic) NSMutableArray *stars;
@property (nonatomic) struct CGSize { double width; double height; } startSize;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *ratingLabel;
@property (weak, nonatomic) id<AWEPOIDetailRatingContainerViewDelegate> delegate;

+ (id)ratingSnapshotWithStyle:(unsigned long long)a0 rating:(double)a1 textFont:(id)a2 textColor:(id)a3;
+ (double)ratingViewWidthForStyle:(unsigned long long)a0 rating:(double)a1 textFont:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 showLabel:(BOOL)a2 textFont:(id)a3 textColor:(id)a4;
- (double)starSpace;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRating:(double)a0;
- (void)handleTap:(id)a0;
- (double)viewHeight;
- (double)viewWidth;

@end
