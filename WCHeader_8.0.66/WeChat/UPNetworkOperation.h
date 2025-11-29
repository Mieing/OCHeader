@class NSMutableData, NSHTTPURLResponse, NSURLConnection;

@interface UPNetworkOperation : NSObject

@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSURLConnection *connection;

+ (id)getScanConfig:(id)a0;
+ (id)getConfig:(id)a0 encTn:(id)a1;
+ (id)sendCallApp:(id)a0 encTn:(id)a1 schema:(id)a2 universalLink:(id)a3;
+ (id)uuidString;

- (void)setCompletionBlockWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
