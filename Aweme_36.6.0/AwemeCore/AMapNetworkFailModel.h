@class NSError, NSURLRequest, NSHTTPURLResponse;

@interface AMapNetworkFailModel : AMapNetworkMonitorModel

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) unsigned long long failType;
@property (readonly, nonatomic) long long errorCode;
@property (nonatomic) long long count;
@property (nonatomic) double spendTime;

- (id)realTimeHeader;
- (id)modelIdentifer;
- (BOOL)isFail;
- (id)offline_errorcode;
- (id)offline_errorsubcode;
- (BOOL)parseErrorInfo;
- (id)initFailModelWithRequest:(id)a0 response:(id)a1 metrics:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)description;

@end
