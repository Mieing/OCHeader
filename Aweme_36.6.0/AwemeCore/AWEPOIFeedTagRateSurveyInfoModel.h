@class AWEPOILynxModel, NSArray, NSString;

@interface AWEPOIFeedTagRateSurveyInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOILynxModel *surveyQuestion;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSArray *freqLimitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freqLimitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canShow;
- (void)clearRecord;
- (void)recordClose;
- (BOOL)isNewUI;
- (void).cxx_destruct;

@end
