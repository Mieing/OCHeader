@class NSString, AnchorTextInfoV2;

@interface AnchorSceneInfoV2 : GPBMessage

@property (nonatomic) int sceneType;
@property (nonatomic) BOOL hasSceneType;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL hasIsShow;
@property (copy, nonatomic) NSString *tracerInfo;
@property (nonatomic) BOOL hasTracerInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) AnchorTextInfoV2 *subDesc;
@property (nonatomic) BOOL hasSubDesc;
@property (retain, nonatomic) AnchorTextInfoV2 *funcDesc;
@property (nonatomic) BOOL hasFuncDesc;
@property (copy, nonatomic) NSString *lightIconURL;
@property (nonatomic) BOOL hasLightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (nonatomic) BOOL hasDarkIconURL;
@property (retain, nonatomic) AnchorTextInfoV2 *suffix;
@property (nonatomic) BOOL hasSuffix;

+ (id)descriptor;

- (id)darkIconURL;
- (id)lightIconURL;
- (BOOL)isShow;
- (int)sceneType;

@end
