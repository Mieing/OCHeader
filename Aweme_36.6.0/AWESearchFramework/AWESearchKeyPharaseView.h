@class UIButton, UIImageView, AWEAwemeModel;

@interface AWESearchKeyPharaseView : UIView

@property (retain, nonatomic) UIButton *keyPhraseButton;
@property (retain, nonatomic) UIImageView *sharpCorner;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasclicked;
@property (copy, nonatomic) id /* block */ clickButtonBlock;

- (void)clickKeyPharaseButton;
- (void)finishJumpKeyPharase;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (double)getWidth;
- (void)updateWithModel:(id)a0;

@end
