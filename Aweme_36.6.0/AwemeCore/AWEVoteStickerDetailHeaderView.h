@class AWEVoteStickerDetailHeaderOptionView, NSArray, UILabel, UIView, UIButton;

@interface AWEVoteStickerDetailHeaderView : UIView

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWEVoteStickerDetailHeaderOptionView *leftOptionView;
@property (retain, nonatomic) AWEVoteStickerDetailHeaderOptionView *rightOptionView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) BOOL darkMode;
@property (copy, nonatomic) NSArray *optionViews;
@property (copy, nonatomic) NSArray *lineViews;

- (BOOL)enableMutilOption;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 darkMode:(BOOL)a1;
- (void)configWithVoteInfo:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
