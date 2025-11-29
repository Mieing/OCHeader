@class NSString, NSMutableArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface AWEIMMyGroupInsertComponent : AWEIMComponentBase <IESIMContactPickerContentSubComponent, IESIMContactPickerContentDataProvider, AWEIMMyGroupInsertAction>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSMutableArray *insertModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (void)contactPickerSelectService:(id)a0 didSelectInSearchWithIdentifiers:(id)a1;
- (void).cxx_destruct;

@end
