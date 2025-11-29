@class NSString, TaskInfo_SimpleUser_PayGrade;

@interface TaskInfo_SimpleUser : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (retain, nonatomic) TaskInfo_SimpleUser_PayGrade *payGrade;
@property (nonatomic) BOOL hasPayGrade;
@property (copy, nonatomic) NSString *avatarThumb;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *userOpenId;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
