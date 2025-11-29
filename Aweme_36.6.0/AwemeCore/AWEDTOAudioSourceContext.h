@class NSString, NSArray, NSDictionary;

@interface AWEDTOAudioSourceContext : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long currentStatus;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) BOOL enableMandarinTranslation;
@property (nonatomic) BOOL isMandarinTranslation;
@property (copy, nonatomic) NSString *translationLanguage;
@property (nonatomic) BOOL translationToMandarin;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *mixAudioUrl;
@property (copy, nonatomic) NSString *mixAudioInfoMd5;
@property (nonatomic) long long mandarinStatus;
@property (nonatomic) BOOL highlightReady;
@property (copy, nonatomic) NSDictionary *intelligenceInfo;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSDictionary *styleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
