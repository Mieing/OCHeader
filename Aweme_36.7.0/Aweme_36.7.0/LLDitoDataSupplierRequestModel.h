@class NSString, NSDictionary, NSError;

@interface LLDitoDataSupplierRequestModel : NSObject

@property (nonatomic) double requestCacheTime;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *requestPath;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) NSError *error;

- (void)didSendRequest;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (id)initWithRequestPath:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
