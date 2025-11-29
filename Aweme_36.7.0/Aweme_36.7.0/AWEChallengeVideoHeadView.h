@class UILabel, UIImageView, UIView;
@protocol AWEChallengeVideoHeadViewDelegate;

@interface AWEChallengeVideoHeadView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sortView;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *sortIcon;
@property (weak, nonatomic) id<AWEChallengeVideoHeadViewDelegate> delegate;

- (void)updateSortType:(unsigned long long)a0;
- (void)onClickSortView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
