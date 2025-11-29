@class NSString, NSMutableDictionary, HTSLiveImage, HTSLiveGradeBuffInfo;

@interface HTSLivePayGradeResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long score;
@property (nonatomic) long long level;
@property (nonatomic) long long thisGradeMinDiamond;
@property (nonatomic) long long thisGradeMaxDiamond;
@property (copy, nonatomic) NSString *gradeDescribe;
@property (retain, nonatomic) HTSLiveImage *newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (retain, nonatomic) HTSLiveImage *newLiveIcon;
@property (nonatomic) BOOL hasNewLiveIcon;
@property (retain, nonatomic) HTSLiveGradeBuffInfo *buffInfo;
@property (nonatomic) BOOL hasBuffInfo;
@property (nonatomic) BOOL gradeDescribeShining;
@property (nonatomic) int describeType;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
