@class NSArray, NSString, NSDictionary;

@interface IESIMGroupRecommendImpl.DefaultGroupRecommendListDataProvider : NSObject <IESIMGroupRecommendListDataProviderProtocol> {
    void /* function */ listDataDidChange;
    void /* function */ initialCellModels;
    void /* function */ cellModels;
    void /* unknown type, empty encoding */ latestRequestDate;
    void /* unknown type, empty encoding */ isFirstLoad;
    void /* unknown type, empty encoding */ source;
    void /* function */ enterFrom;
    void /* function */ enterMethod;
    void /* unknown type, empty encoding */ categoryID;
    void /* unknown type, empty encoding */ bizExt;
    void /* function */ trackingExt;
    void /* unknown type, empty encoding */ cursor;
}

@property (nonatomic, copy) id /* block */ listDataDidChange;
@property (nonatomic, copy) NSArray *initialCellModels;
@property (nonatomic, copy) NSArray *cellModels;
@property (nonatomic) BOOL checkPersonalRecommendLimit;
@property (nonatomic, readonly) NSString *enterFrom;
@property (nonatomic, readonly) NSString *enterMethod;
@property (nonatomic, readonly) NSDictionary *trackingExt;

- (void)loadMore;
- (void).cxx_destruct;
- (id)init;
- (void)reload:(BOOL)a0;

@end
