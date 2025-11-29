@class NSString, AWEIMSimilarEmojiDisplayView;
@protocol AWEIMSimilarEmojiDisplayQuickLookViewModelProtocol, AWEIMBaseCollectionViewCellEventProtocol;

@interface AWEIMEmoticonDisplayQuickLookCollectionViewCell : UICollectionViewCell <AWEIMBaseCollectionViewCellRenderProtocol>

@property (retain, nonatomic) id<AWEIMSimilarEmojiDisplayQuickLookViewModelProtocol> viewModel;
@property (retain, nonatomic) AWEIMSimilarEmojiDisplayView *displayView;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewCellEventProtocol> cellEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)renderModel:(id)a0 context:(id)a1 forIndexPath:(id)a2 inCollectionView:(id)a3;
- (void)setupCustomAutoLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
