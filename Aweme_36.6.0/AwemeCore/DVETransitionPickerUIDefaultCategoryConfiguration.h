@class NSString;

@interface DVETransitionPickerUIDefaultCategoryConfiguration : NSObject <DVEPickerCategoryUIConfigurationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)indicatorHeight;
- (id)clearButtonSeparatorColor;
- (id)categoryTabListBackgroundColor;
- (id)categoryTabListBottomBorderColor;
- (double)categoryTabListViewHeight;
- (id)clearEffectButtonImage;
- (Class)categoryItemCellClass;
- (struct CGSize { double x0; double x1; })stickerPickerCategoryTabView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)categoryTabListViewLayout;

@end
