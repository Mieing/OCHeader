@class Word, NSString, UILabel, UIView, UIButton;

@interface IESLiveSensitiveCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIButton *delButton;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) Word *dataWord;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;

- (void)updateBackViewLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
