@class NSString;

@interface IESIMGroupImpl.PickerRemoteInfoListDataProvider : NSObject <IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble> {
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ pageSize;
    void /* unknown type, empty encoding */ bizExtra;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ subscribers;
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ introductionInfo;
    void /* unknown type, empty encoding */ itemList;
    void /* unknown type, empty encoding */ cursor;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;
@property (nonatomic) BOOL hasMore;

- (id)getCellViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWitContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
