@class NSString, NSDictionary;

@interface AWEDiscoverDPlayletPerformanceEventRequestUnit : AWEDiscoverDPlayletPerformanceEventUnit

@property (retain, nonatomic) NSString *errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSDictionary *logPb;

- (id)detail_imprId;
- (void)endWithError:(id)a0 apiModel:(id)a1;
- (id)unitParams;
- (void).cxx_destruct;

@end
