@class NSString;

@interface IESIMGroupImpl.ActiveGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ ActiveGroupList;
    void /* unknown type, empty encoding */ InActiveGroupList;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

- (id)getCellViewModels;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
