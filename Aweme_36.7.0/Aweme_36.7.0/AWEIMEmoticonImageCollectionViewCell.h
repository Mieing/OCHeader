@class NSString, AWEIMCacheableImageView, AWEIMEmoticonCellViewModel, NSIndexPath;

@interface AWEIMEmoticonImageCollectionViewCell : UICollectionViewCell <AWEIMEmoticonImageCollectionViewCell>

@property (retain, nonatomic) AWEIMCacheableImageView *emoticonImageView;
@property (retain, nonatomic) AWEIMEmoticonCellViewModel *emoticonCellViewModel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithViewModel:(id)a0;
- (void)layoutComponent;
- (void)createComponent;
- (void)renderUIWithViewModel:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
