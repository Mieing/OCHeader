@class NSString;

@interface BDHMJSBPerfModel : NSObject

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *statusDesc;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *protocolVersion;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *jssdkVersion;
@property (nonatomic) double invokeTS;
@property (nonatomic) double callbackTS;
@property (nonatomic) double fireEventTS;
@property (nonatomic) double costTime;

- (id)lynxJSBPerfDict;
- (id)webJSBPerfDict;
- (void).cxx_destruct;

@end
