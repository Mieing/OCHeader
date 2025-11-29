@class NSString, WCMediaItem, NSDictionary, NSError;

@interface WCLivePhotoDataReport : NSObject

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) NSString *assetID;
@property (nonatomic) long long liveVideoDurationMs;
@property (nonatomic) long long actionDurationMs;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *actionInfoDic;

+ (id)safeJSONStringWithObject:(id)a0;
+ (id)safeStringWithString:(id)a0;

- (id)generateLiveReportString;
- (void)doReportLivePhotoData;
- (void).cxx_destruct;

@end
