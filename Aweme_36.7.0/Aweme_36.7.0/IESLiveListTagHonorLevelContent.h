@class HTSLiveImage;

@interface IESLiveListTagHonorLevelContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;

+ (id)descriptor;

@end
