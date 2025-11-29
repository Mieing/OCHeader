@class NSError;

@interface BDPScopeCurrentStatus : NSObject

@property (retain, nonatomic) NSError *statusError;
@property (nonatomic) unsigned long long statusCode;

- (void).cxx_destruct;

@end
