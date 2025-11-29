@class AFDButton, AWEButton, NSString, UIButton;
@protocol AFDFollowButtonProtocol;

@interface AWEFeedUnfollowFamiliarFollowAndDislikeView : UIStackView

@property (nonatomic) double buttonMaxWidth;
@property (nonatomic) double buttonNormalWidth;
@property (nonatomic) BOOL canShowMateBtn;
@property (retain, nonatomic) AWEButton *disLikeBtn;
@property (retain, nonatomic) AWEButton *unfollowBtn;
@property (retain, nonatomic) AFDButton *greetBtn;
@property (retain, nonatomic) UIButton<AFDFollowButtonProtocol> *followBtn;
@property (retain, nonatomic) AWEButton *mateBtn;
@property (copy, nonatomic) NSString *referString;

- (id)p_buttonFont;
- (void)setupDislikeButton;
- (void)resetDisLikeBtnSize;
- (id)mateBtnText;
- (void)updateUnFollowButtonText:(id)a0 icon:(id)a1 isPrimaryColor:(BOOL)a2;
- (void)updateDislikeButtonWithWhiteStyle:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
