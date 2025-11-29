@class NSString, NSMutableURLRequest, NSData, NSMutableData, NSURLConnection, QBBeaconReqDataPackage;

@interface QBBeaconNetRequest : NSObject

@property (retain, nonatomic) NSURLConnection *urlConnection;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSMutableData *rspData;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *retryPostData;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSString *serverUrl;
@property (retain, nonatomic) QBBeaconReqDataPackage *reqDataPkg;
@property (nonatomic) id delegate;

+ (id)defaultQueue;

- (void)startAsync;
- (void)reqFinished;
- (id)init;
- (void)dealloc;
- (void)_startAsync;
- (void)doFailOperation:(id)a0;
- (void)doSuccessOperation:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;

@end
