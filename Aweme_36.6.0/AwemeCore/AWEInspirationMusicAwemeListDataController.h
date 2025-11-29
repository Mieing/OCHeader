@class NSString, NSDictionary;
@protocol AWEDetailMusicMonitorService;

@interface AWEInspirationMusicAwemeListDataController : AWEInspirationAwemeListDataController <AWEMusicListDataControllerProtocol>

@property (nonatomic) long long listFetchNumbers;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSDictionary *fetchAwemeListExtraParams;
@property (weak, nonatomic) id<AWEDetailMusicMonitorService> monitor;
@property (nonatomic) BOOL disableZeroOffsetClean;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)networkRequestCommonParams;
- (unsigned long long)inspirationType;
- (void)weakBindInspirationModel:(id)a0;
- (long long)musicDetailAwemeListRequestCount;
- (void)trackForMusicAwemeListRequestWithIfIsInitial:(BOOL)a0 currentFetchAwemeCount:(long long)a1 currentFetchFilteredAwemeCount:(long long)a2 loadDuration:(double)a3 error:(id)a4;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (BOOL)musicDetailRelatedEnable;
- (void).cxx_destruct;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
