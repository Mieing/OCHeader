@class HTSLiveCommon;

@interface HTSLiveFeedbackActionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long actionId;

+ (id)descriptor;

@end
