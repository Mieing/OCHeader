@class UILabel, UIFont, UIColor;

@interface IESECWinReplayCollectionSubtitleView : UIView <IESECLLComponent> {
    UIFont *_font;
    UIColor *_color;
}

@property (retain, nonatomic) UILabel *subtitleLabel;

+ (id /* block */)subtitleWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 font:(id)a2;
+ (id /* block */)subtitleWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 font:(id)a2 color:(id)a3;

- (void)updateUIWithModel:(id)a0;
- (id)initWithFont:(id)a0 color:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
