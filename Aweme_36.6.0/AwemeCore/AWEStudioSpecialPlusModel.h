@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface AWEStudioSpecialPlusModel : AWEBaseApiModel <NSCoding>

@property (copy, nonatomic) NSArray *activityTimes;
@property (copy, nonatomic) NSString *plusIconUrl;
@property (copy, nonatomic) NSString *plusMd5;
@property (copy, nonatomic) NSArray *effectIds;
@property (copy, nonatomic) NSArray *awemeIds;
@property (copy, nonatomic) NSDictionary *othersInfo;
@property (copy, nonatomic) NSString *plusBubble;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (nonatomic) long long scene;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *effectsDownloadPathMap;

+ (id)activityTimesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)plusIconImage;
- (BOOL)isInActivityTime;
- (void)cleanResources;
- (BOOL)isDownloadingEffectModel;
- (BOOL)isDownloadingPlusIcon;
- (id)downloadPathWithEffectId:(id)a0;
- (void)setIsDownloadingEffectModel:(BOOL)a0;
- (void)updateDownloadPath:(id)a0 withEffectId:(id)a1;
- (void)setIsDownloadingPlusIcon:(BOOL)a0;
- (void)downloadResources;
- (BOOL)canDownloadResource;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
