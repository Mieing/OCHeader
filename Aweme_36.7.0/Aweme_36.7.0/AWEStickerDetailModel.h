@class AWECommerceStickerDetailModel, NSString, NSArray, AWEShareModel, AWEURLModel, NSDictionary, AWEStickerChallengeGuideModel, AWEUserAccountCertInfoModel;

@interface AWEStickerDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *designerID;
@property (copy, nonatomic) NSString *designerSecUserID;
@property (copy, nonatomic) NSString *designerName;
@property (nonatomic) long long userCount;
@property (readonly, nonatomic) BOOL isAIGCSticker;
@property (readonly, nonatomic) BOOL isAIGCLora;
@property (readonly, nonatomic) BOOL isImageTemplateSticker;
@property (nonatomic) long long visitCount;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *sdkExtra;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWECommerceStickerDetailModel *commerceStickerModel;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (retain, nonatomic) AWEStickerChallengeGuideModel *challengeGuide;
@property (nonatomic) long long effectSource;
@property (nonatomic) BOOL showRedEnvelopeGuide;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (copy, nonatomic) NSArray *userRankings;
@property (readonly, copy, nonatomic) NSString *bizExtra;
@property (retain, nonatomic) NSArray *shareExtVideoCoverURLs;
@property (retain, nonatomic) NSDictionary *extraLogInfo;

+ (id)propertyToModelClassInArrayMap;
+ (id)shareInfoJSONTransformer;
+ (id)iconURLJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)avatarMediumJSONTransformer;
+ (id)challengeGuideJSONTransformer;
+ (id)placeholderModel;
+ (id)accountCertInfoJSONTransformer;
+ (id)commerceStickerModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)welfareActivityID;
- (id)extraJSONDic;
- (void).cxx_destruct;

@end
