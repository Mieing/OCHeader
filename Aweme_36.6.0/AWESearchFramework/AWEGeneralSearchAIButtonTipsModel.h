@class NSString;

@interface AWEGeneralSearchAIButtonTipsModel : AWEBaseApiModel

@property (nonatomic) BOOL showGuideBar;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL shouldNotKeepRequestTips;
@property (copy, nonatomic) NSString *guideBarType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
