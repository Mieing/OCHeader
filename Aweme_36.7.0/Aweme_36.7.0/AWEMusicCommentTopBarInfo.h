@class NSString, NSArray;

@interface AWEMusicCommentTopBarInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSArray *coverUrls;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *preTitle;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *lunaSongID;
@property (nonatomic) unsigned long long resourceType;
@property (copy, nonatomic) NSString *resourceTypeString;
@property (copy, nonatomic) NSString *recommendString;
@property (copy, nonatomic) NSString *songContentString;
@property (copy, nonatomic) NSString *lunaColorGradientInfo;
@property (nonatomic) int hitStrategy;
@property (nonatomic) long long hitStrategyV2;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mvMetaSongID;
@property (nonatomic) unsigned long long commentAnchorType;
@property (nonatomic) BOOL isOpenUrl;
@property (copy, nonatomic) NSString *bonusContent;
@property (copy, nonatomic) NSString *guideContent;
@property (copy, nonatomic) NSString *openUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
