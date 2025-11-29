@class NSString, IESIMContactPickerComponentContext;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMCreateGroupMyGroupComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)hostVC_afterFirstRender;
- (id)getDataProvider;
- (void)p_trackMyGroupWithClick:(BOOL)a0;
- (void).cxx_destruct;

@end
