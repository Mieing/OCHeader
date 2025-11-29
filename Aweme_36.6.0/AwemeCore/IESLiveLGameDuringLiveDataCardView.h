@class UILabel;
@protocol IESLiveLGameDuringLiveInfoCardViewDelegate;

@interface IESLiveLGameDuringLiveDataCardView : UIView

@property (retain, nonatomic) UILabel *exposureCountLabel;
@property (retain, nonatomic) UILabel *clickCountLabel;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (weak, nonatomic) id<IESLiveLGameDuringLiveInfoCardViewDelegate> viewDelegate;

- (void)reloadDataCard;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
