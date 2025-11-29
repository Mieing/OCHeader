@class NSString, WCMomentsMediaPredictedResult;

@interface WCMomentsPlayerSourceDetermination : NSObject

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long mediaSource;
@property (nonatomic) long long previousSourceStatus;
@property (nonatomic) long long currentSourceStatus;
@property (nonatomic) BOOL HDFileExists;
@property (nonatomic) BOOL LDFileExists;
@property (nonatomic) BOOL canSwitchSource;
@property (nonatomic) long long previewSourceMode;
@property (nonatomic) long long previewRequestReason;
@property (nonatomic) BOOL canPlayHDRVideos;
@property (retain, nonatomic) WCMomentsMediaPredictedResult *predictedResult;

- (id)description;
- (void).cxx_destruct;

@end
