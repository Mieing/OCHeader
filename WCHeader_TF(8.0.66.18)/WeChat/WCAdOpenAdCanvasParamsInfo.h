@class NSString;

@interface WCAdOpenAdCanvasParamsInfo : NSObject

@property (retain, nonatomic) NSString *canvasId;
@property (nonatomic) BOOL noStore;
@property (nonatomic) BOOL preLoad;
@property (retain, nonatomic) NSString *adInfoXml;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) BOOL openFirstSightVoice;
@property (retain, nonatomic) NSString *twistCardId;
@property (nonatomic) long long fromOuterIndex;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) NSString *gesturePoints;
@property (retain, nonatomic) NSString *samplePoints;
@property (nonatomic) float targetDistance;
@property (nonatomic) BOOL openInHalfScreen;

- (void).cxx_destruct;

@end
