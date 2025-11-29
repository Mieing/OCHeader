@class ACCTextIntelligenceModel, NSString, NSArray, AWEVideoPublishViewModel, ACCModernAutoCaptionUploadInfo, NSMutableDictionary, NSDictionary, ACCExtractAbilityManager;
@protocol ACCAutoCaptionAudioExporterProtocol;

@interface ACCModernAutoCaptionInputConfig : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCAutoCaptionAudioExporterProtocol> audioExportor;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) double videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (weak, nonatomic) ACCExtractAbilityManager *extractManager;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) unsigned long long mandarinStatus;
@property (copy, nonatomic) NSString *translationLanguage;
@property (copy, nonatomic) NSArray *translationBackupCaptions;
@property (copy, nonatomic) ACCTextIntelligenceModel *intelligenceInfo;
@property (copy, nonatomic) NSDictionary *intelligenceInfos;
@property (copy, nonatomic) NSDictionary *styleConfigs;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSArray *faceInfo;
@property (nonatomic) BOOL highligtReady;
@property (nonatomic) long long currentAudioSourceType;
@property (retain, nonatomic) NSMutableDictionary *audioSourceContexts;
@property (retain, nonatomic) NSMutableDictionary *mandarinStatusByAudioSource;
@property (retain, nonatomic) ACCModernAutoCaptionUploadInfo *uploadInfo;
@property (nonatomic) BOOL useHalfScreen;
@property (nonatomic) BOOL needAutoPlay;
@property (nonatomic) double initialTime;
@property (nonatomic) long long triggerType;
@property (nonatomic) unsigned long long enterType;
@property (copy, nonatomic) NSString *displayTitleOfMusic;
@property (copy, nonatomic) NSString *customCategory;

- (void).cxx_destruct;

@end
