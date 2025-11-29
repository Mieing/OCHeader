@class MMUILabel;

@interface WCFinderLiveStarterSimpleButton : MMUIButton

@property (retain, nonatomic) MMUILabel *contentLabel;
@property (nonatomic) BOOL isSimpleVersion;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updateWithSimpleVersion:(BOOL)a0;
- (void).cxx_destruct;

@end
