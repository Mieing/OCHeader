@class NSString, NSArray;

@interface IESIMGroupImpl.MySocialGroupListDataProvider : NSObject <IESIMMySocialGroupDataManagerDelegate, IESIMContactDataProviderLoadMoreAble, IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ mySocialGroupDelegate;
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ mySocialGroupDataManager;
    void /* function */ loadedCellModels;
    void /* unknown type, empty encoding */ initDataRxPromise;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic, weak) void /* function */ providerDelegate;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, copy) NSArray *loadedCellModels;

- (void)socialGroupDataManager:(id)a0 didRemoveGroup:(id)a1 reason:(long long)a2;
- (id)getCellViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWitContext:(id)a0;
- (BOOL)isNeedLoadMore;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
