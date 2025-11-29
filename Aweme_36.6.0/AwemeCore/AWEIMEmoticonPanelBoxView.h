@class UIStackView, NSString, UICollectionView, UIView;

@interface AWEIMEmoticonPanelBoxView : UIView <AWEIMEmoticonPanelBoxView>

@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *draggableView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UICollectionView *panelCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)iesim_themeReload:(id)a0;
- (void)p_setupThemeDynamicConfig;
- (void)p_commonCollectionViewSetup:(id)a0;
- (void).cxx_destruct;

@end
