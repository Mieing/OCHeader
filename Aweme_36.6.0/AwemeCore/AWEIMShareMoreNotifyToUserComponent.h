@class IESIMShareMoreSelectionContext, NSString, IESIMContactPickerComponentContext, NSMutableArray;

@interface AWEIMShareMoreNotifyToUserComponent : AWEIMComponentBase <AWEIMShareMoreNotifyInterface, IESIMContackPickerViewControllerLifeCylceAction>

@property (retain, nonatomic) IESIMShareMoreSelectionContext *selectionContext;
@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponent;
@property (retain, nonatomic) NSMutableArray *sharedUserIDList;
@property (retain, nonatomic) NSMutableArray *sharedUIDList;
@property (retain, nonatomic) NSMutableArray *sharedSecUIDList;
@property (retain, nonatomic) NSMutableArray *sharedCIDList;
@property (nonatomic) BOOL hasShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)halfScreenContainerVCDidDismiss;
- (void)halfScreenContainerVCWillDismiss;
- (void)didClickFullScreenCloseButton:(BOOL)a0 closeByUser:(BOOL)a1 completion:(id /* block */)a2;
- (void)messageBaseViewControllerDidAppear:(id)a0;
- (void)p_postSelfDidDisapperNotification;
- (void)performOpenShareCompletionWithStatusCode:(unsigned long long)a0 needTransferBack:(BOOL)a1;
- (void)p_triggerShareResultWithCallbackStrategy:(unsigned long long)a0;
- (void)startShareNotifyWithNeedCreateGroup:(BOOL)a0 text:(id)a1;
- (void)dismissVerticalSharePanel:(BOOL)a0 closeByUser:(BOOL)a1 completion:(id /* block */)a2;
- (id)getSelectedShareList;
- (id)p_currentAwemeModel;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)a0;
- (void)p_addObservers;

@end
