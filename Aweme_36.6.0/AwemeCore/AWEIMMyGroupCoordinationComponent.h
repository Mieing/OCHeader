@class NSString;
@protocol IESIMContactPickerSearchService, IESIMContactPickerMultiTabsInterface;

@interface AWEIMMyGroupCoordinationComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, IESIMContactPickerSearchAction>

@property (weak, nonatomic) id<IESIMContactPickerMultiTabsInterface> multiTabsService;
@property (weak, nonatomic) id<IESIMContactPickerSearchService> searchService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)searchCancelButtonClicked;
- (id)p_filterTypeForViewController:(id)a0;
- (void).cxx_destruct;

@end
