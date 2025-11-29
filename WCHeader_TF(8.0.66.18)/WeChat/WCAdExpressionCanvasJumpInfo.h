@class NSString, WCAdExpressionCanvasHalfScreenJumpInfo;

@interface WCAdExpressionCanvasJumpInfo : NSObject

@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *canvasXml;
@property (retain, nonatomic) NSString *adInfoXml;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) int pageScene;
@property (retain, nonatomic) NSString *bizAppId;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) BOOL noStore;
@property (nonatomic) BOOL preload;
@property (retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *canvasHalfScreenJumpInfo;
@property (nonatomic) BOOL videoAllowVioce;
@property (nonatomic) BOOL forbidBackToBizApp;
@property (nonatomic) long long outPlaybackTimeMs;

- (void).cxx_destruct;

@end
