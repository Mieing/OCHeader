@class AWEHotMusicNameLoopView, NSString, UIImageView, UIView, AWEGradientView, UILabel;

@interface AWEHotMusicTopTitleView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *musicNameContainer;
@property (retain, nonatomic) AWEHotMusicNameLoopView *musicNameView;
@property (retain, nonatomic) UIView *rankAndAuthorView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *dotLabel;
@property (retain, nonatomic) UILabel *hotMusicTagLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (copy, nonatomic) NSString *currentMusicName;

- (void)updateViewWithMusicRank:(id)a0 musicName:(id)a1 author:(id)a2;
- (double)calculateMusicNameContainerLengthWithText:(id)a0;
- (id)addStrokeWithString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
