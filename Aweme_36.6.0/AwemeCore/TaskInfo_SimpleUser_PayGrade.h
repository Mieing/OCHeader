@class NSString;

@interface TaskInfo_SimpleUser_PayGrade : IESLivePBBaseMessage

@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *newImIconWithLevel;

+ (id)descriptor;

@end
