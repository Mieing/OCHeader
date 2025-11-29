@class UIImageView, NSString;
@protocol RTVEmoticonDataManagerInterface, RTVXRControllerInjector;

@interface RTVInteractionBottomBarEmojiCell : UICollectionViewCell <RTVCellRenderProcotol>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)renderModel:(id)a0 context:(id)a1 forIndexPath:(id)a2 inCollectionView:(id)a3;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
