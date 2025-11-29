@class NSString, NSURL;

@interface BDUGFlowAuthEnvContext : NSObject

@property (copy, nonatomic) NSString *topVC;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *currentCertID;
@property (copy, nonatomic) NSString *lastCertID;

- (void).cxx_destruct;

@end
