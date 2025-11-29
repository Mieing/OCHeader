@class NSString, HTSLiveCommon, HTSLiveTeamPlayPopup, NSMutableArray;

@interface HTSLiveTeamPlayTeamInfoMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;
@property (nonatomic) int teamSize;
@property (copy, nonatomic) NSString *playId;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) int teamMembersNum;
@property (retain, nonatomic) HTSLiveTeamPlayPopup *popup;
@property (nonatomic) BOOL hasPopup;
@property (nonatomic) long long anchorId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *promoteGameId;
@property (nonatomic) int teamJoinMode;

+ (id)descriptor;

@end
