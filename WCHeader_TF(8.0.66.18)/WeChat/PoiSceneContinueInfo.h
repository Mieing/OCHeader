@class PoiInfo, NSMutableArray, NSString;

@interface PoiSceneContinueInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *ids;
@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) PoiInfo *poiInfo;
@property (retain, nonatomic) NSString *bannerWords;

+ (void)initialize;

@end
