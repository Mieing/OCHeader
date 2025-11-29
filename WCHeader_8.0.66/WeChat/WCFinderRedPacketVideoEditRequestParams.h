@class NSURL;

@interface WCFinderRedPacketVideoEditRequestParams : NSObject

@property (retain, nonatomic) NSURL *videoUrl;
@property (nonatomic) BOOL isPendantView;
@property (nonatomic) long long minSeconds;
@property (nonatomic) long long maxSeconds;

- (id)init;
- (void).cxx_destruct;

@end
