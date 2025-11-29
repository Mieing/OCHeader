@class NSString;
@protocol AWEIMBaseCollectionViewCellEventProtocol;

@interface AWEIMSimilarEmoticonCollectionViewCell : AWEIMVerticalMutiableGIFEmoticonCollectionViewCell <AWEIMBaseCollectionViewCellRenderProtocol>

@property (weak, nonatomic) id<AWEIMBaseCollectionViewCellEventProtocol> cellEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)renderModel:(id)a0 context:(id)a1 forIndexPath:(id)a2 inCollectionView:(id)a3;
- (void)addCustomAutoLayout;
- (void)layoutSubviewsFrame;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
