@class NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerGroupIncentiveF2FComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (nonatomic) BOOL hasTrackShow;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (void)__transferToFaceToFaceGroup;
- (id)p_getMangoTokenParamsWith:(id)a0;
- (void)transferToFaceToFaceGroupWithParams:(id)a0;
- (void).cxx_destruct;

@end
