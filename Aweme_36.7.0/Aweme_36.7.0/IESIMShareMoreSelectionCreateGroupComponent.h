@class NSString, IESIMContactPickerComponentContext, IESIMContactPickerContext;
@protocol IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerContentSectionBuilder, IESIMContactPickerSelectService;

@interface IESIMShareMoreSelectionCreateGroupComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponentContext;
@property (retain, nonatomic) IESIMContactPickerContext *listContext;
@property (copy, nonatomic) id /* block */ createGroupCompletion;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (id)p_enterMethodForEventCreateGroup;
- (id)p_enterFormForEventCreateGroup;
- (void)p_transferToCreateGroup;
- (void).cxx_destruct;

@end
