@class NSString;

@interface BDHMJSBFetchErrorModel : NSObject

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) long long bridgeCode;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long requestErrorCode;
@property (copy, nonatomic) NSString *requestErrorMsg;

- (id)lynxJSBFetchErrorDict;
- (id)webJSBFetchErrorDict;
- (void).cxx_destruct;

@end
