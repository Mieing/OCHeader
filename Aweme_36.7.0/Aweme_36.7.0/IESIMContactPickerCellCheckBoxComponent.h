@class NSString, AWEBinding;

@interface IESIMContactPickerCellCheckBoxComponent : IESIMContactPickerCellComponentBase <IESIMContactPickerSelectAction>

@property (nonatomic) BOOL isSelect;
@property (retain, nonatomic) AWEBinding *binding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)p_onTapAction;
- (void).cxx_destruct;
- (id)createView;

@end
