@class YYLabel, UIButton, UIImageView, AWEProfileHeaderContext, UILabel, UIView, NSAttributedString;
@protocol AWEProfileHeaderLongVideoSignatureViewDelegate;

@interface AWEProfileHeaderLongVideoSignatureView : UIView

@property (retain, nonatomic) UIView *noticeContainerView;
@property (retain, nonatomic) UIImageView *noticeIconImageView;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) NSAttributedString *introInfoIconAttributedString;
@property (retain, nonatomic) YYLabel *introInfoLabel;
@property (retain, nonatomic) UIButton *moreIntroInfoButton;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) id<AWEProfileHeaderLongVideoSignatureViewDelegate> delegate;

+ (double)viewHeightWithContext:(id)a0;
+ (double)introHeightWithContext:(id)a0;

- (BOOL)shouldAdaptBigFontMode;
- (void)configWithContext:(id)a0;
- (double)adaptBigFontModeViewWidth:(double)a0;
- (id)adaptBigFontModeImage:(id)a0;
- (id)introAttributedStringWithText:(id)a0;
- (struct CGSize { double x0; double x1; })adaptBigFontModeViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })moreIntroInfoButtonSize;
- (id)titleFontOfClass:(long long)a0 weight:(long long)a1;
- (void)didTapMoreIntroInfoButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
