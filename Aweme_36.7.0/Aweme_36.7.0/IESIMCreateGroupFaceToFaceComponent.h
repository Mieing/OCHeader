@class NSString, IESIMContactPickerComponentContext;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMCreateGroupFaceToFaceComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (id)createGroupContext;
- (void)__transferToFaceToFaceGroup;
- (void)transferToFaceToFaceGroupWithParams:(id)a0;
- (id)__newCellModel;
- (id)p_cellIdentifier;
- (void)p_handleRadarGroupCreateNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
