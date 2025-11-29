@class NSString, MJGeographicPicker, NSArray, MJPageViewV2, MJDatePickerView, MJImageComposingViewModel, MJImageMaterialPicker, MMUIButton;
@protocol MJWhenWhereEditPanelDelegate;

@interface MJWhenWhereEditPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>

@property (retain, nonatomic) MJImageComposingViewModel *viewModel;
@property (retain, nonatomic) MJImageMaterialPicker *materialPicker;
@property (retain, nonatomic) MJDatePickerView *datePicker;
@property (retain, nonatomic) MJGeographicPicker *geographicPicker;
@property (retain, nonatomic) MJPageViewV2 *pageView;
@property (retain, nonatomic) NSArray *pageTitles;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (weak, nonatomic) id<MJWhenWhereEditPanelDelegate> delegate;
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
- (void)pageView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)imageMaterialPicker:(id)a0 didSelectItem:(id)a1;
- (void)_reloadDatePicker;
- (void)_updateWhen:(id)a0;
- (void)_reloadGeographicPicker;
- (void)_forwardUpdateWhere;
- (void)updateLocationWithItem:(id)a0;
- (void)doneButtonTouchUpInside:(id)a0;
- (BOOL)isEditingPanel;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (void).cxx_destruct;

@end
