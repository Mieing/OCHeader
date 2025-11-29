@class NSString, HTSLiveCommon;

@interface HTSLiveOChannelModifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long endTimestamp;
@property (nonatomic) long long channelUid;
@property (copy, nonatomic) NSString *showlistSchema;
@property (copy, nonatomic) NSString *channelOpenId;

+ (id)descriptor;

@end
