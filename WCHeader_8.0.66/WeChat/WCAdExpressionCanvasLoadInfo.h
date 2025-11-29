@class NSString;

@interface WCAdExpressionCanvasLoadInfo : NSObject

@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) BOOL videoMuted;
@property (nonatomic) BOOL forbidBackToBizApp;
@property (nonatomic) long long outPlaybackTimeMs;

- (void).cxx_destruct;

@end
