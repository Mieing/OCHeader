@class UIStackView, NSString, UIImageView, LOTAnimationView, UIView, UILabel, AWEAwemeModel;
@protocol AWEAwemeDetailPlayletInnerAdCountDownViewDelegate;

@interface AWEAwemeDetailPlayletInnerAdCountDownView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *blockInfoView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *blockAdTitle;
@property (retain, nonatomic) LOTAnimationView *adSlideAnimationView;
@property (retain, nonatomic) UILabel *stayEnoughAdTitle;
@property (weak, nonatomic) UIView *adFreeEntryContentView;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSString *stayEnoughAdTitleString;
@property (weak, nonatomic) id<AWEAwemeDetailPlayletInnerAdCountDownViewDelegate> delegate;

- (id)initWithAwemeModel:(id)a0;
- (void)updateCountDownLabel:(id)a0;
- (id)initWithAwemeModel:(id)a0 stayEnoughAdText:(id)a1;
- (double)blockAdContentWidth;
- (double)stayEnoughContentWidth;
- (id)createAdEntryViewWithColor:(id)a0 playletAweme:(id)a1;
- (void)updateLineViewHidden:(BOOL)a0;
- (void)updateAdBlockLabelAnimated:(BOOL)a0 loopAnimation:(BOOL)a1;
- (void)showAdFreeEntryContentWithPlayletAweme:(id)a0;
- (void).cxx_destruct;
- (void)setUpUI;

@end
