@class NSString, NSDictionary, CJPayPrefetchConfig, NSError, NSMutableArray, CJPayPrefetchRequestModel;

@interface CJPayDataPrefetcher : NSObject <CJPayPrefetcherProtocol>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSString *requestUrl;
@property (retain, nonatomic) CJPayPrefetchRequestModel *curModel;
@property (retain, nonatomic) CJPayPrefetchConfig *config;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *dataCallbacks;
@property (nonatomic) BOOL dataReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchData:(id /* block */)a0;
- (id)initWith:(id)a0 prefetchConfig:(id)a1;
- (void)p_processRequestData:(id)a0;
- (void)p_notifyDataReady;
- (void).cxx_destruct;
- (void)startRequest;

@end
