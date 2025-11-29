@class NSString, WCAdWeAppInfo, WCAdExpressionCanvasHalfScreenJumpInfo;

@interface WCAdExpressionJumpInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) WCAdWeAppInfo *waAppInfo;
@property (nonatomic) int waScene;
@property (retain, nonatomic) NSString *waSceneNote;
@property (retain, nonatomic) NSString *canvasXml;
@property (retain, nonatomic) NSString *adInfoXml;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *canvasLoadInfo;
@property (retain, nonatomic) NSString *finderAdData;
@property (retain, nonatomic) NSString *bizAppId;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) BOOL canvasNoStore;
@property (nonatomic) BOOL canvasPreload;
@property (nonatomic) BOOL videoAllowVioce;
@property (nonatomic) BOOL forbidBackToBizApp;
@property (nonatomic) long long outPlaybackTimeMs;
@property (retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *canvasHalfScreenJumpInfo;
@property (retain, nonatomic) NSString *pid;
@property (nonatomic) int emotionScene;
@property (nonatomic) int emotionEntrace;

- (id)init;
- (BOOL)checkValid;
- (void).cxx_destruct;

@end
