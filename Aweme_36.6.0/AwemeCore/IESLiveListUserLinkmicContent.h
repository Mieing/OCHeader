@class NSString, IESLiveAnchorLinkmicIDInfo;

@interface IESLiveListUserLinkmicContent : IESLivePBBaseMessage

@property (nonatomic) long long resourceId;
@property (nonatomic) BOOL showIdentity;
@property (nonatomic) int pkUserRole;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *fanTicket;
@property (nonatomic) long long joinChannelTime;
@property (retain, nonatomic) IESLiveAnchorLinkmicIDInfo *anchorLinkmicIdInfo;
@property (nonatomic) BOOL hasAnchorLinkmicIdInfo;
@property (nonatomic) int anchorAuthRole;
@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *hostBackColor;
@property (copy, nonatomic) NSString *hostNameColor;
@property (nonatomic) BOOL hostSwitch;

+ (id)descriptor;

@end
