@class NSString, HTSLiveCommon;

@interface HTSLiveUserStatsMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long actionType;

+ (id)descriptor;

@end
