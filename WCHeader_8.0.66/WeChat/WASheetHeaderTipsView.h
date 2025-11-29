@class NSString, UIImageView, UILabel, UIButton;

@interface WASheetHeaderTipsView : UIView

@property (copy, nonatomic) NSString *tipsText;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) id /* block */ clickCloseBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;

+ (double)tipsViewHeightWithText:(id)a0 superviewWidth:(double)a1;

- (id)initWithTipsText:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onClickTipsClose:(id)a0;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
