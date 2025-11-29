@class NSString;

@interface AWECommentQualityStampModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *qualityCommentStampIconLight;
@property (copy, nonatomic) NSString *qualityCommentStampIconDark;
@property (copy, nonatomic) NSString *qualityCommentStampJumpUrl;
@property (nonatomic) unsigned long long qualityCommentStampType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
