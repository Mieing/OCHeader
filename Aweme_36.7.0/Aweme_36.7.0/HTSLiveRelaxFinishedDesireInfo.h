@class HTSLiveDesire;

@interface HTSLiveRelaxFinishedDesireInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveDesire *desire;
@property (nonatomic) BOOL hasDesire;
@property (nonatomic) int totalCount;

+ (id)descriptor;

@end
