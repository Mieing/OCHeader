@class NSString;

@interface AWETextTemplateNewDefaultCategoryUIConfiguration : NSObject <AWETextTemplateCategoryUIConfigurationProtocol>

@property (copy, nonatomic) id /* block */ layoutHandler;
@property (nonatomic) double categoryHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clearButtonSeparatorColor;
- (id)categoryTabListBackgroundColor;
- (id)categoryTabListBottomBorderColor;
- (double)categoryTabListViewHeight;
- (id)clearEffectButtonImage;
- (Class)categoryItemCellClass;
- (struct CGSize { double x0; double x1; })stickerPickerCategoryTabView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)categoryTabViewLayout;
- (void)setCategoryTabListViewHeight:(double)a0;
- (BOOL)isNewTextTemplateConfig;
- (void).cxx_destruct;
- (id)init;

@end
