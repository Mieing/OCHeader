@class NSString, IESLiveLinkLiveRTCVideoBusinessParam;

@interface IESLiveLinkLiveRTCMixParam : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long videoBitrateKbps;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *mixVideoParamServer;

- (void).cxx_destruct;

@end
