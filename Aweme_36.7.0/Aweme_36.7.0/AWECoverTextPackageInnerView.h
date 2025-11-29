@class NSArray, NSMutableArray, AWECoverTextPackage;

@interface AWECoverTextPackageInnerView : UIView

@property (retain, nonatomic) NSMutableArray *innerConfigViews;
@property (readonly, nonatomic) NSArray *configViews;
@property (retain, nonatomic) AWECoverTextPackage *textPackageConfig;
@property (copy, nonatomic) id /* block */ textDidChangeBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBounds;

@end
