@class HTSLiveUser, NSString, GPBEnumArray, NSMutableArray, SimpleUserInfo;

@interface GetAdminListResponse_AdminUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) BOOL isAnchorAssign;
@property (copy, nonatomic) NSString *visitStatus;
@property (nonatomic) long long totalScore;
@property (nonatomic) BOOL inRoom;
@property (retain, nonatomic) GPBEnumArray *privilegesArray;
@property (readonly, nonatomic) unsigned long long privilegesArray_Count;
@property (copy, nonatomic) NSString *promptTotalScore;
@property (retain, nonatomic) SimpleUserInfo *simpleUserInfo;
@property (nonatomic) BOOL hasSimpleUserInfo;
@property (retain, nonatomic) NSMutableArray *descPromptListArray;
@property (readonly, nonatomic) unsigned long long descPromptListArray_Count;

+ (id)descriptor;

@end
