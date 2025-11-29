@class IESLiveLinkLiveVideoParam;

@interface IESLiveLinkLiveDualStreamParam : NSObject

@property (nonatomic) long long remoteDefaultStreamType;
@property (nonatomic) long long isAutoSwitch;
@property (nonatomic) long long autoSwitchUserNumber;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *hdVideoParam;
@property (nonatomic) long long hdSubIndex;
@property (retain, nonatomic) IESLiveLinkLiveVideoParam *sdVideoParam;
@property (nonatomic) long long sdSubIndex;

- (void).cxx_destruct;
- (id)init;

@end
