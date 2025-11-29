@class NSString;

@interface AWEIMWorkSpaceCardMessage : AWEBaseApiModel

@property (nonatomic) long long source;
@property (nonatomic) long long missionSource;
@property (copy, nonatomic) NSString *attentionContent;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long timpStamp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
