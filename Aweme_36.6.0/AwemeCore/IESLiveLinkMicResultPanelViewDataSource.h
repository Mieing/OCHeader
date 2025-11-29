@class NSString, IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic;

@interface IESLiveLinkMicResultPanelViewDataSource : NSObject

@property (nonatomic) long long linkDuration;
@property (retain, nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic *userinfoDuringLinkmic;
@property (nonatomic) int leaveSource;
@property int kickOutSource;
@property int sysKickOutSource;
@property (copy, nonatomic) NSString *linkmicUniqueId;

- (void).cxx_destruct;

@end
