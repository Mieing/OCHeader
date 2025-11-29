@class NSString, NSNumber, NSDictionary;

@interface AnnieStartSpeechRecognitionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSNumber *sosSilenceTimeout;
@property (retain, nonatomic) NSNumber *eosSilenceTimeout;
@property (retain, nonatomic) NSNumber *sentenceMaxSeconds;
@property (nonatomic) BOOL useLLM;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appToken;
@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) BOOL saveAudioToFile;
@property (copy, nonatomic) NSDictionary *requestParam;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
