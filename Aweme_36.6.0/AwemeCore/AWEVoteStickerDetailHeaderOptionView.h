@class UILabel;

@interface AWEVoteStickerDetailHeaderOptionView : UIView

@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL darkMode;

- (BOOL)enableMutilOption;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 darkMode:(BOOL)a1;
- (void)configWithOption:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
