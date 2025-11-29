@class NSString;
@protocol RxInjector;

@interface BDStickerPanelCategoryUIConfiguration : NSObject <AWEStickerPickerCategoryUIConfigurationProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) id /* block */ layoutHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportClearButton;
- (id)clearButtonSeparatorColor;
- (id)categoryTabListBackgroundColor;
- (id)categoryTabListBottomBorderColor;
- (double)categoryTabListViewHeight;
- (id)clearEffectButtonImage;
- (id)clearEffectButtonAccessibilityLabel;
- (Class)categoryItemCellClass;
- (struct CGSize { double x0; double x1; })stickerPickerCategoryTabView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
