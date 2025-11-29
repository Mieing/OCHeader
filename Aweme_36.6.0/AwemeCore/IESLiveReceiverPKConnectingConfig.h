@class NSString, BattleLinkerInviteMessageExtra, NSNumber, HTSLiveRoom;

@interface IESLiveReceiverPKConnectingConfig : NSObject

@property (retain, nonatomic) NSString *tips;
@property (nonatomic) BOOL hideDisturbButton;
@property (retain, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *optionText;
@property (copy, nonatomic) NSString *acceptButtonText;
@property (copy, nonatomic) NSString *cancelButtonText;
@property (retain, nonatomic) HTSLiveRoom *inviteRoom;
@property (retain, nonatomic) BattleLinkerInviteMessageExtra *inviterInfo;
@property (copy, nonatomic) NSNumber *receiveRoomId;
@property (nonatomic) long long pkMatchMode;
@property (nonatomic) unsigned long long reserveStatus;
@property (nonatomic) long long panelType;

- (void).cxx_destruct;

@end
