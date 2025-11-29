@class NSString;

@interface IESIMGroupImpl.PublicGroupListDataProvider : NSObject <IESIMContactDataProviderLoadMoreAble, IESIMContactPickerContentDataProvider> {
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ dataDelegate;
    void /* unknown type, empty encoding */ isEmptyState;
    void /* unknown type, empty encoding */ emptyCellModel;
    void /* unknown type, empty encoding */ footerViewModel;
    void /* unknown type, empty encoding */ loadedCellModels;
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
