@class NSString, IESGCPPBCGAuthInfo, IESGCPPBCGLoginInfo, IESGCPPBMaintainInfo;

@interface IESGCPPBGetCGLoginInfoResponse_Data : GPBMessage

@property (retain, nonatomic) IESGCPPBCGLoginInfo *jumpLoginInfo;
@property (nonatomic) BOOL hasJumpLoginInfo;
@property (nonatomic) int loginStatus;
@property (nonatomic) int loginType;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIcon;
@property (retain, nonatomic) IESGCPPBCGAuthInfo *cgAuthInfo;
@property (nonatomic) BOOL hasCgAuthInfo;
@property (retain, nonatomic) IESGCPPBMaintainInfo *maintainInfo;
@property (nonatomic) BOOL hasMaintainInfo;

+ (id)descriptor;

@end
