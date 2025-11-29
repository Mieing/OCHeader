@class NSMutableDictionary, NSString, AWEAwemeModel, NSNumber;

@interface AWELivePreStreamRelatedPanelViewModel : AWEListDataController <AWERelatedRecommendListBaseDataControllerProtocol> {
    void /* function */ enterFrom;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ followSessionID;
}

@property (nonatomic, retain) AWEAwemeModel *currentAweme;
@property (nonatomic, retain) NSNumber *requestTime;
@property (nonatomic, retain) NSMutableDictionary *extraParams;
@property (nonatomic, copy) NSString *enterFrom;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithLogExtra:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
