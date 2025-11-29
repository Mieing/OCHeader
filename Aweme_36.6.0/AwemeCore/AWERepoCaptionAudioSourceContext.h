@class AWEStudioCaptionInfoModel, NSArray, NSString, NSURL, ACCTextIntelligenceModel, NSDictionary;

@interface AWERepoCaptionAudioSourceContext : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *captions;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long currentStatus;
@property (nonatomic) BOOL enableMandarinTranslation;
@property (nonatomic) BOOL isMandarinTranslation;
@property (copy, nonatomic) NSString *translationLanguage;
@property (nonatomic) unsigned long long mandarinStatus;
@property (nonatomic) BOOL translationToMandarin;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSURL *mixAudioUrl;
@property (copy, nonatomic) NSString *mixAudioInfoMd5;
@property (copy, nonatomic) AWEStudioCaptionInfoModel *captionInfo;
@property (copy, nonatomic) ACCTextIntelligenceModel *intelligenceInfo;
@property (nonatomic) BOOL highlightReady;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSArray *faceInfo;
@property (copy, nonatomic) NSDictionary *styleConfig;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
