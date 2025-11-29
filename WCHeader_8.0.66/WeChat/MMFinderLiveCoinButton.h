@class UIImageView, MMUILabel, MMUIButton;

@interface MMFinderLiveCoinButton : MMUIView

@property (retain, nonatomic) MMUIButton *containerButton;
@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMUILabel *wecoinCountLabel;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (nonatomic) unsigned int wecoinCount;
@property (copy, nonatomic) id /* block */ coinButtonClickCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWecoinCount:(unsigned int)a0 buttonText:(id)a1;
- (void)onCoinButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
