@class UIImageView, MMFinderLiveReplayGreateTimeModel, MMWebImageView, UIView, MMUILabel;

@interface WCFinderLiveReplayMomentsViewCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *momentImageView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) MMUILabel *momentTimeLabel;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) MMUILabel *momentDescLabel;
@property (retain, nonatomic) MMFinderLiveReplayGreateTimeModel *replayMoment;
@property (nonatomic) BOOL hideSeperatorLine;

+ (double)extraTopInset;
+ (double)momentCellsSpace;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateReplayMoment:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)layoutMomentImageView;
- (void).cxx_destruct;

@end
