@class MJPageViewV2, MJImageComposingViewModel, NSArray, MJImageMaterialPicker, NSString;
@protocol MJImageAddTextPanelDelegate;

@interface MJImageAddTextPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) MJImageMaterialPicker *materialPicker;
@property (retain, nonatomic) MJPageViewV2 *pageView;
@property (retain, nonatomic) NSArray *pageTitles;
@property (weak, nonatomic) id<MJImageAddTextPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)a0;
- (id)pageView:(id)a0 titleForItemAtIndex:(long long)a1;
- (id)pageView:(id)a0 contentForItemAtIndex:(long long)a1;
- (void)imageMaterialPicker:(id)a0 didSelectItem:(id)a1;
- (void)_addTextWithMaterialItem:(id)a0;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (void).cxx_destruct;

@end
