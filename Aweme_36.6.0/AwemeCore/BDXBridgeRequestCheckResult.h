@class NSString, NSDictionary;

@interface BDXBridgeRequestCheckResult : NSObject

@property (nonatomic) unsigned long long action;
@property (nonatomic) BOOL checkSuccess;
@property (retain, nonatomic) NSString *denyReason;
@property (retain, nonatomic) NSDictionary *trackingsInfo;
@property (retain, nonatomic) NSDictionary *trackingsWarn;

- (void).cxx_destruct;

@end
