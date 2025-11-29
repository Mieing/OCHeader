@class NSString;

@interface HTSLiveUser_BottomEntry : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL mysteryMan;
@property (nonatomic) long long gradeLevel;
@property (nonatomic) BOOL hideGradeLevel;

+ (id)descriptor;

@end
