@class UILabel, UITapGestureRecognizer, NSString;
@protocol AWEProfileHeaderStarAtlasGuideCollectionViewCellDelegate;

@interface AWEProfileHeaderStarAtlasGuideCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) UILabel *starAtlasGuideLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEProfileHeaderStarAtlasGuideCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)labelFontSize;

@end
