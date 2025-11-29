@class NSString;

@interface HTSLiveAnchorBoost : IESLivePBBaseMessage

@property (nonatomic) long long eventName;
@property (nonatomic) long long anchorId;
@property (nonatomic) int liveId;
@property (nonatomic) int eventType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
