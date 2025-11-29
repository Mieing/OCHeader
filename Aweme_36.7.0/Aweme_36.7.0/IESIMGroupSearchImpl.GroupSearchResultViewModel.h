@class NSDictionary, NSString, NSArray;

@interface IESIMGroupSearchImpl.GroupSearchResultViewModel : NSObject <IESIMGroupRecommendListDataProviderProtocol> {
    void /* function */ initialCellModels;
    void /* function */ cellModels;
    void /* unknown type, empty encoding */ groupIDSet;
    void /* function */ listDataDidChange;
    void /* unknown type, empty encoding */ nextCursor;
    void /* unknown type, empty encoding */ lastSource;
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ _dataLoadState;
    void /* unknown type, empty encoding */ query;
}

@property (nonatomic, readonly) NSDictionary *trackingExt;
@property (nonatomic, readonly) NSString *enterFrom;
@property (nonatomic, readonly) NSString *enterMethod;
@property (nonatomic, readonly) BOOL checkPersonalRecommendLimit;
@property (nonatomic, copy) NSArray *initialCellModels;
@property (nonatomic, copy) NSArray *cellModels;
@property (nonatomic, copy) id /* block */ listDataDidChange;

- (void)loadMore;
- (void)reload:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
