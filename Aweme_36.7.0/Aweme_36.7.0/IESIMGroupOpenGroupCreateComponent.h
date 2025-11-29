@class NSString;
@protocol IESIMContactPickerContentDataProviderDelegate;

@interface IESIMGroupOpenGroupCreateComponent : AWEIMComponentBase <IESIMContactPickerContentSubComponent, IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ groupContext;
    void /* unknown type, empty encoding */ cellReuseIdentifier;
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalSectionBuilder;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, retain) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (void)componentDidMounted:(id)a0;
- (id)getDataProvider;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
