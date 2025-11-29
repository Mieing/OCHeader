@class NSString;

@interface AWEFeedTabJumpGuideTrackAwemeInfo : NSObject

@property (nonatomic) long long videoExposeCount;
@property (nonatomic) long long recvTime;
@property (nonatomic) long long maxPlayProgress;
@property (copy, nonatomic) NSString *notShowReason;
@property (copy, nonatomic) NSString *trigger;
@property (nonatomic) BOOL didShow;

- (void).cxx_destruct;

@end
