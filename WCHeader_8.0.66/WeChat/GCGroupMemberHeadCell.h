@class UILabel, UIView, GCStatusView, MMWebImageView;

@interface GCGroupMemberHeadCell : GCBaseCollectionViewCell

@property (retain, nonatomic) MMWebImageView *headImgView;
@property (retain, nonatomic) GCStatusView *statusView;
@property (retain, nonatomic) UIView *backHeadCircles;
@property (retain, nonatomic) UIView *normalContainerView;
@property (retain, nonatomic) UILabel *useAsTextLabel;
@property (retain, nonatomic) MMWebImageView *leftUpImgView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (void)setHeadCycles:(int)a0;
- (void)playStatusAnimation;
- (void).cxx_destruct;

@end
