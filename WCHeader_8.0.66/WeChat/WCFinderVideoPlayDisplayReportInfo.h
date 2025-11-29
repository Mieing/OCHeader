@class NSString, WCPlayerPlaybackInfo;

@interface WCFinderVideoPlayDisplayReportInfo : NSObject

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property (nonatomic) BOOL showBulletAnimating;

- (void).cxx_destruct;

@end
