@class IESECListKitLynxCellController, UIImageView, IESECLynxCard, UILabel, UIView;
@protocol IESECLynxCollectionViewCellDelegate;

@interface IESECLynxCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverImageViewHolder;
@property (retain, nonatomic) UILabel *coverImageDebugLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double width; double height; } cellViewBoundsSize;
@property (nonatomic) struct CGSize { double width; double height; } coverImageBoundsSize;
@property (nonatomic) BOOL useRenderingOpt;
@property (retain, nonatomic) IESECLynxCard *cellView;
@property (weak, nonatomic) id<IESECLynxCollectionViewCellDelegate> delegate;
@property (nonatomic) double ipadSizeScale;
@property (nonatomic) long long currentSection;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) IESECListKitLynxCellController *lynxCellController;

- (id)findViewWithName:(id)a0;
- (id)uiWithName:(id)a0;
- (void)viewDidDisappear:(id)a0 sourceType:(unsigned long long)a1;
- (void)viewDidAppear:(id)a0 sourceType:(unsigned long long)a1;
- (void)setGreyModeInLayer:(id)a0 withSaturation:(double)a1;
- (long long)convertWith:(id)a0;
- (void)updateWithBorderRadius:(id)a0;
- (void)updateWithBorderRadiusList:(id)a0 cellSize:(struct CGSize { double x0; double x1; })a1;
- (void)setGreyStyleWithExtraData:(id)a0 viewModel:(id)a1;
- (void)updateWithBorderRadiusList:(id)a0;
- (void)playWithAutoPlayDuration:(double)a0 completeBlock:(id /* block */)a1;
- (void)updateChipViewWithModel:(id)a0;
- (void)addDebugLabel;
- (void).cxx_destruct;
- (void)pause;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
