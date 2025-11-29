@class NSArray, AWEAwemeModel;

@interface AWETeenGeneralActionPanelCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *actionArray;

+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)playLikeAnimationWithModel:(id)a0 status:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
