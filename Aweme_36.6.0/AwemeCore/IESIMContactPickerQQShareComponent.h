@class NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerQQShareComponent : AWEIMComponentBase <IESIMContactPickerContentDataProvider, IESIMContactPickerContentSubComponent>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;

- (id)getCellViewModels;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (void)__transferQQ;
- (void).cxx_destruct;

@end
