@class NSString;

@interface IESIMGroupImpl.CreatePublicGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ cellModels;
}

@property (nonatomic, weak) void /* function */ providerDelegate;
@property (nonatomic, copy) NSString *providerIdentifier;

- (id)getCellViewModels;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
