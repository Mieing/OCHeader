@class NSString;

@interface WCFinderVideoProducerOptions : NSObject

@property (nonatomic) unsigned long long mjTemplateScene;
@property (nonatomic) BOOL isCDNDownloadDisabled;
@property (nonatomic) BOOL isAIAnalysisEnabled;
@property (nonatomic) unsigned long long creationRetainDuration;
@property (nonatomic) unsigned long long creationMaxDurationSec;
@property (nonatomic) unsigned long long preprocMaxDurationSec;
@property (copy, nonatomic) NSString *exportFilePath;
@property (nonatomic) BOOL isDefaultTemplateEnabled;
@property (nonatomic) BOOL isStubTemplateEnabled;
@property (nonatomic) BOOL isMJAppLauncherTemplateEnabled;
@property (nonatomic) BOOL isAssetClipperMJAppLauncherEnabled;
@property (nonatomic) BOOL isTemplateFlowMJAppLauncherEnabled;
@property (nonatomic) BOOL isFolderTemplateEnabled;
@property (nonatomic) BOOL isWXRecommendEnabled;
@property (nonatomic) BOOL isMJRecommendEnabled;
@property (nonatomic) BOOL isMusicSearcherEnabled;
@property (nonatomic) BOOL isMusicSearchingAfterInputEnabled;
@property (nonatomic) long long maxRecommendCount;
@property (nonatomic) long long maxStubCount;
@property (retain, nonatomic) NSString *createSameTemplateId;
@property (retain, nonatomic) NSString *createSameMusicId;
@property (retain, nonatomic) NSString *createSameFeedMusicId;
@property (retain, nonatomic) NSString *createSameAIModelType;
@property (nonatomic) BOOL isOSTEnabled;
@property (nonatomic) BOOL isBGMEnabled;
@property (nonatomic) BOOL isLyricsEnabled;
@property (nonatomic) BOOL isOptimizedClipLogicEnabled;
@property (nonatomic) BOOL isMusicRecommendForDefaultTemplateEnabled;
@property (nonatomic) BOOL isMusicRecommendForRecommendTemplateEnabled;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL canExportInBackground;
@property (nonatomic) BOOL isAssetClipperEnabled;
@property (nonatomic) unsigned int activityEventType;

- (id)description;
- (void).cxx_destruct;

@end
