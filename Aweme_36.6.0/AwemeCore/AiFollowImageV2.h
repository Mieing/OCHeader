@class NSString;

@interface AiFollowImageV2 : GPBMessage

@property (copy, nonatomic) NSString *originalUri;
@property (nonatomic) BOOL hasOriginalUri;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;

+ (id)descriptor;

@end
