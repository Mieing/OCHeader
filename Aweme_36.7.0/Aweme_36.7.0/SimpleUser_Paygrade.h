@class HTSLiveImage, HTSLiveGradeBuffInfo;

@interface SimpleUser_Paygrade : IESLivePBBaseMessage

@property (nonatomic) long long level;
@property (retain, nonatomic) HTSLiveImage *newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (retain, nonatomic) HTSLiveGradeBuffInfo *buffInfo;
@property (nonatomic) BOOL hasBuffInfo;

+ (id)descriptor;

@end
