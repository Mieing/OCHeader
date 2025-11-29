@class NSNumber, UILabel;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteDurationCell : UICollectionViewCell

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) UILabel *durationLabel;

- (void)updateSelected:(BOOL)a0;
- (void)updateDuration:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
