@class NSArray;

@interface AWEMultiContentImpl.PlayletDataController : NSObject <AFDBroadcastDataControllerProtocol> {
    void /* unknown type, empty encoding */ triggerFetchCount;
    void /* unknown type, empty encoding */ fetchMaxCount;
    void /* unknown type, empty encoding */ isLoadingLeft;
    void /* unknown type, empty encoding */ isLoadingRight;
    void /* unknown type, empty encoding */ leftLoadTask;
    void /* unknown type, empty encoding */ rightLoadTask;
    void /* unknown type, empty encoding */ dataSource;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ currentAwemeId;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ playletId;
    void /* unknown type, empty encoding */ aweme;
}

@property (nonatomic, copy) NSArray *sectionModels;
@property (nonatomic, readonly) long long landingIndex;
@property (nonatomic) unsigned long long contentScene;

- (void)initFetchMixWith:(id)a0;
- (void)fetchLeftWith:(long long)a0 isInitial:(BOOL)a1 fetchCount:(long long)a2;
- (void)fetchRightWith:(long long)a0 isInitial:(BOOL)a1 fetchCount:(long long)a2;
- (void)updateCurrentAwemeIdWith:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
