@interface WCFinderPlayBufferingInfo : NSObject

@property (nonatomic) unsigned long long startLoadingTimestamp;
@property (nonatomic) unsigned long long endLoadingTimestamp;
@property (nonatomic) unsigned long long playbackTime;
@property (nonatomic) BOOL isFirstFrameLoading;
@property (nonatomic) unsigned long long bufferingType;

@end
