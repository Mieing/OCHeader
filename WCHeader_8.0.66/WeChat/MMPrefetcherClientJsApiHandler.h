@class NSString;

@interface MMPrefetcherClientJsApiHandler : NSObject

@property (copy, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int userHash;
@property (copy, nonatomic) id /* block */ callback;

- (void)setupApiWithJSContext:(id)a0;
- (void)addApi_getId:(id)a0;
- (void)addApi_getUserHash:(id)a0;
- (void)addApi_request:(id)a0;
- (void)doRequestWithUrl:(id)a0 method:(id)a1 header:(id)a2 body:(id)a3 callback:(id)a4;
- (void)handleHTTPURLResponse:(id)a0 data:(id)a1 error:(id)a2 callback:(id)a3;
- (void).cxx_destruct;

@end
