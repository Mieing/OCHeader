@class NSString;

@interface AWEMVInFlowPlayQualityTracker : NSObject

@property (nonatomic) BOOL needTrack;
@property (nonatomic) double showCardTime;
@property (nonatomic) double clickCardTime;
@property (nonatomic) unsigned long long clickCardType;
@property (nonatomic) double inFlowWillAppearTime;
@property (nonatomic) double inFlowCellDisplayTime;
@property (nonatomic) double inFlowReadyForDisplayTime;
@property (nonatomic) double inFlowStartPlayTime;
@property (nonatomic) BOOL isContinuePlay;
@property (nonatomic) BOOL isChunk;
@property (nonatomic) long long clickIndex;
@property (nonatomic) BOOL isClickPrepare;
@property (nonatomic) long long cardHeight;
@property (nonatomic) long long cacheSize;
@property (nonatomic) long long isLaunchCache;
@property (nonatomic) unsigned long long preloadState;
@property (nonatomic) BOOL isFirstInstall;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *referString;

- (void)trackJumpToInFlow;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
