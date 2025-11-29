@class UILabel, NSString;

@interface AWEIMTaskPlatformFilterCell : UICollectionViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *filterLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_setupLayout;
- (void)updateUIWithSelected:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
