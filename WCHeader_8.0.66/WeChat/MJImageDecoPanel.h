@class MJEmotionView, MJPageViewV2, MJImageComposingViewModel, NSArray, MJImageMaterialPicker, NSString;
@protocol MJImageDecoPanelDelegate;

@interface MJImageDecoPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJEmotionViewDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) MJImageMaterialPicker *materialPicker;
@property (retain, nonatomic) MJEmotionView *emotionView;
@property (retain, nonatomic) MJPageViewV2 *pageView;
@property (retain, nonatomic) NSArray *pageTitles;
@property (weak, nonatomic) id<MJImageDecoPanelDelegate> delegate;
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
- (void)emotionView:(id)a0 didSelectItem:(id)a1;
- (void)_updateWhenWhereDataAndShowEditPanel;
- (void)_updateWhenData;
- (void)_updateWhereDataWithCompletion:(id /* block */)a0;
- (void)_requestLocationItemForScene:(id)a0 layer:(id)a1 completion:(id /* block */)a2;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (void).cxx_destruct;

@end
