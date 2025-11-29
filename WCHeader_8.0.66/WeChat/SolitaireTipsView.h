@class SolitaireObj, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol SolitaireTipsViewDelegate;

@interface SolitaireTipsView : UIView

@property (retain, nonatomic) UIButton *bgContentBtn;
@property (retain, nonatomic) UILabel *tipsInfoLabel;
@property (retain, nonatomic) UIButton *tipActionBtn;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSString *nsHadShowKey;
@property (retain, nonatomic) SolitaireObj *solitaireObj;
@property (weak, nonatomic) id<SolitaireTipsViewDelegate> delegate;

- (id)init;
- (id)accessibilityLabel;
- (void)changeDisplayWording;
- (void)show;
- (void)autoHiddenSelf;
- (void)onTapActionButton:(id)a0;
- (void).cxx_destruct;

@end
