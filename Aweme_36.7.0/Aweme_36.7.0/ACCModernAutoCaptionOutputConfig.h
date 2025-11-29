@class NSArray, NSDictionary, NSString, ACCTextIntelligenceModel, NSMutableDictionary, ACCModernAutoCaptionUploadInfo;

@interface ACCModernAutoCaptionOutputConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) unsigned long long mandarinStatus;
@property (retain, nonatomic) ACCTextIntelligenceModel *intelligenceInfo;
@property (copy, nonatomic) NSDictionary *intelligenceInfos;
@property (copy, nonatomic) NSString *transitionLanguage;
@property (copy, nonatomic) NSDictionary *styleConfigs;
@property (nonatomic) long long currentAudioSourceType;
@property (retain, nonatomic) NSMutableDictionary *audioSourceContexts;
@property (retain, nonatomic) NSMutableDictionary *mandarinStatusByAudioSource;
@property (retain, nonatomic) ACCModernAutoCaptionUploadInfo *uploadInfo;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSArray *faceInfo;
@property (copy, nonatomic) NSString *saveActionName;
@property (nonatomic) BOOL edited;
@property (nonatomic) BOOL highligtReady;

- (void).cxx_destruct;

@end
