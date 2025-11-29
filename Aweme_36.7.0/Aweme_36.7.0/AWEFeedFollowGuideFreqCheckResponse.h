@class NSString;

@interface AWEFeedFollowGuideFreqCheckResponse : AWEBaseApiModel

@property (nonatomic) BOOL passCheck;
@property (copy, nonatomic) NSString *notPassReason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
