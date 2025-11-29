@class PoiSceneContinueInfo;

@interface ContinueInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) PoiSceneContinueInfo *poiInfo;

+ (void)initialize;

@end
