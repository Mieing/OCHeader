@class NSString, HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveProfitInteractionScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableDictionary *anchorInfos;
@property (readonly, nonatomic) unsigned long long anchorInfos_Count;
@property (nonatomic) int interactionScoreStatus;
@property (nonatomic) long long channelId;
@property (nonatomic) long long startTime;
@property (nonatomic) int interactionScoreAction;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *gameExtra;

+ (id)descriptor;

@end
