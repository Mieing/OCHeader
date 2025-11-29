@class NSString;

@interface AWERequestVidFeatureModel : NSObject

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) unsigned long long templateId;
@property (copy, nonatomic) NSString *templateTitle;
@property (copy, nonatomic) NSString *featureInfo;
@property (nonatomic) BOOL isNeedInAlumbRequestStatus;
@property (nonatomic) BOOL isAIGCEffectStatus;
@property (nonatomic) BOOL isVimoOrPixelVideoTemplateStatus;

- (void).cxx_destruct;
- (id)init;

@end
