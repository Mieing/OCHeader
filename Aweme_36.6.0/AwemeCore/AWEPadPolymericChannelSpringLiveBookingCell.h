@class UIImageView, UILabel, UIView, AWEPlVMultiInfoView;

@interface AWEPadPolymericChannelSpringLiveBookingCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *lunarTimeLine;
@property (retain, nonatomic) UILabel *lunarTimeLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEPlVMultiInfoView *infoView;
@property (copy, nonatomic) id /* block */ onBookingBtnClicked;

+ (double)heightWithWidth:(double)a0;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)onBookingBtnClicked:(id)a0;
- (void)updateCoverImageWithUrlArray:(id)a0 completion:(id /* block */)a1;
- (void)updateViewForBreakPoint:(struct { long long x0; long long x1; })a0;
- (void)setupTimeLineWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
