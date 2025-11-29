@class NSString, NSError, NSDate;

@interface MJAITemplateReporter : NSObject

@property (nonatomic) unsigned long long reportScene;
@property (copy, nonatomic) NSString *maasSessionKey;
@property (copy, nonatomic) NSString *momentsPostSessionID;
@property (nonatomic) unsigned long long assetCount;
@property (nonatomic) long long phase;
@property (retain, nonatomic) NSDate *assetPreparationStartTime;
@property (retain, nonatomic) NSDate *assetPreparationEndTime;
@property (retain, nonatomic) NSDate *cdnUploadStartTime;
@property (retain, nonatomic) NSDate *cdnUploadEndTime;
@property (retain, nonatomic) NSDate *cdnDownloadStartTime;
@property (retain, nonatomic) NSDate *cdnDownloadEndTime;
@property (copy, nonatomic) NSString *aiAssetGeneratingTaskID;
@property (retain, nonatomic) NSDate *aiAssetGeneratingStartTime;
@property (retain, nonatomic) NSDate *aiAssetGeneratingEndTime;
@property (retain, nonatomic) NSDate *templateSwitchingStartTime;
@property (retain, nonatomic) NSDate *templateSwitchingEndTime;
@property (nonatomic) long long result;
@property (retain, nonatomic) NSError *error;

- (void)report;
- (void).cxx_destruct;

@end
