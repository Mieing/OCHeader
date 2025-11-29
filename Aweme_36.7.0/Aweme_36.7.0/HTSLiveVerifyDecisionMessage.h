@class NSString, HTSLiveCommon;

@interface HTSLiveVerifyDecisionMessage : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *decisionConf;
@property (copy, nonatomic) NSString *checkReason;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long popTime;

+ (id)descriptor;

@end
