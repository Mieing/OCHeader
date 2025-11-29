@class NSArray;

@interface AWEMultiContentImpl.BroadcastDataController : NSObject <AFDBroadcastDataControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_triggerFetchCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fetchMaxCount;
    void /* unknown type, empty encoding */ isLoadingLeft;
    void /* unknown type, empty encoding */ isLoadingRight;
    void /* unknown type, empty encoding */ dataSource;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ currentAwemeId;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ mixID;
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ trackAweme;
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
