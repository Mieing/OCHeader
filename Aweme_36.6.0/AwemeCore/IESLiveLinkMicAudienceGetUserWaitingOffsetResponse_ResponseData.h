@class HTSLiveText, NSString, IESLiveListUser, NSMutableArray, HTSLiveJoinTeamfightInfo;

@interface IESLiveLinkMicAudienceGetUserWaitingOffsetResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableArray *waitingUsersArray;
@property (readonly, nonatomic) unsigned long long waitingUsersArray_Count;
@property (retain, nonatomic) HTSLiveJoinTeamfightInfo *joinTeamfightInfo;
@property (nonatomic) BOOL hasJoinTeamfightInfo;
@property (retain, nonatomic) IESLiveListUser *curUser;
@property (nonatomic) BOOL hasCurUser;
@property (retain, nonatomic) NSMutableArray *recommendItemsArray;
@property (readonly, nonatomic) unsigned long long recommendItemsArray_Count;

+ (id)descriptor;

@end
