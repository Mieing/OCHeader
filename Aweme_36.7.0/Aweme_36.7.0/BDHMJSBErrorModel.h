@class NSString;

@interface BDHMJSBErrorModel : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSString *jssdkVersion;
@property (nonatomic) unsigned long long from;
@property (copy, nonatomic) NSString *protocolVersion;
@property (nonatomic) unsigned long long period;

- (id)lynxJSBErrorDict;
- (id)webJSBErrorDict;
- (void).cxx_destruct;

@end
