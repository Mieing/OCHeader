@class NSString;

@interface IESIMCreateGroupDescriptionComponent : AWEIMComponentBase <IESIMContactPickerContentSubComponent, IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ _sectionBuilder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionView;
}

@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)getCellViewModels;
- (id)getDataProvider;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
