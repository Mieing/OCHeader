@class NSString;

@interface IESIMGroupImpl.InActiveGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ groupCount;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

- (id)getCellViewModels;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
