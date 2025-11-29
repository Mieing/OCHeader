@class AWEInteractionVoteStickerInfoModel, AWEInteractionVoteStickerOptionsModel, UILabel, UIView;

@interface ACCPollStickerOptionView : UIView

@property (retain, nonatomic) UIView *percentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (retain, nonatomic) AWEInteractionVoteStickerOptionsModel *option;
@property (retain, nonatomic) AWEInteractionVoteStickerInfoModel *voteInfo;
@property (nonatomic) BOOL isAnimating;

- (long long)currentPercent;
- (void)updateUIConfig;
- (void)configWithOption:(id)a0 voteInfo:(id)a1;
- (void)performSelectionAnimationWithOption:(id)a0 voteInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
