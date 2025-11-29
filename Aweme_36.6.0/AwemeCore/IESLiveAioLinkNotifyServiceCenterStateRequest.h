@class NSString, IESLiveAioLinkNotifyServiceCenterStateRequest_StateStarted, IESLiveAioLinkNotifyServiceCenterStateRequest_StateStopped, IESLiveAioLinkNotifyServiceCenterStateRequest_StateLoaded;

@interface IESLiveAioLinkNotifyServiceCenterStateRequest : IESLivePBBaseMessage

@property (nonatomic) int state;
@property (copy, nonatomic) NSString *serviceVersion;
@property (readonly, nonatomic) int stateDataOneOfCase;
@property (retain, nonatomic) IESLiveAioLinkNotifyServiceCenterStateRequest_StateStarted *stateStarted;
@property (retain, nonatomic) IESLiveAioLinkNotifyServiceCenterStateRequest_StateLoaded *stateLoaded;
@property (retain, nonatomic) IESLiveAioLinkNotifyServiceCenterStateRequest_StateStopped *stateStopped;

+ (id)descriptor;

@end
