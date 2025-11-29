@class AWEUserModel, NSString, NSArray, AWEUserBrandInfoModel, NSNumber, AWEURLModel;

@interface AWESearchAdStarEndorsementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long adType;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *ironManURL;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (nonatomic) BOOL isPreview;
@property (copy, nonatomic) NSArray *adImageURLList;
@property (copy, nonatomic) NSArray *challengeList;
@property (retain, nonatomic) AWEUserBrandInfoModel *brandInfoModel;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long nativeType;
@property (nonatomic) long long countdown;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSString *subText;
@property (retain, nonatomic) AWEUserModel *advertiserInfo;
@property (copy, nonatomic) NSArray *advancedInfos;
@property (copy, nonatomic) NSString *eAdInfo;
@property (nonatomic) long long adStyleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeListJSONTransformer;
+ (id)brandInfoModelJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)advertiserInfoJSONTransformer;
+ (id)adImageURLListJSONTransformer;
+ (id)advancedInfosJSONTransformer;
+ (id)iconListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasLinkName;
- (void).cxx_destruct;
- (double)cellHeight;

@end
