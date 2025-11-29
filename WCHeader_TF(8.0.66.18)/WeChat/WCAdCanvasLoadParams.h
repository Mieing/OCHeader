@class NSString, WCAdSupportCapabilityInfo;

@interface WCAdCanvasLoadParams : NSObject

@property (nonatomic) unsigned long long canvasId;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) WCAdSupportCapabilityInfo *supportCapability;
@property (retain, nonatomic) NSString *dynamicCanvasLibVersion;
@property (readonly, nonatomic) NSString *canvasIdStr;
@property (nonatomic) unsigned long long loadStartTimeMs;

- (id)init;
- (id)cacheKey;
- (id)description;
- (void).cxx_destruct;

@end
