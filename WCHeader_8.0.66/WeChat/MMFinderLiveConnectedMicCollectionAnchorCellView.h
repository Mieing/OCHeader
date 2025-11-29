@class MMFinderLiveConnectedMicBaseAnchorCellView, MMFinderLiveTask, UILabel;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectedMicCollectionAnchorCellView : UICollectionViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseAnchorCellView *baseView;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> actionDelegate;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)a0 searchInfo:(id)a1 forceHideOperationButton:(BOOL)a2 forceDisableOperationButton:(BOOL)a3 hideBottomSeparatorLine:(BOOL)a4;
- (void)updateUseNewSubTitle:(BOOL)a0;
- (void).cxx_destruct;

@end
