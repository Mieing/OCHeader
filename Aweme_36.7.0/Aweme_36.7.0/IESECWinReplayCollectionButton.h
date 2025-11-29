@class NSString, IESECButton;

@interface IESECWinReplayCollectionButton : UIView <IESECLLComponent> {
    NSString *_title;
}

@property (retain, nonatomic) IESECButton *button;

+ (id /* block */)buttonWithSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 title:(id)a2;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setupUI;

@end
