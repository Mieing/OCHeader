@class NSArray, WCAdDynamicCanvasDSLFallbackInfo, WCAdDynamicCanvasDSLHalfScreenInfo;

@interface WCAdDynamicCanvasDSLData : NSObject

@property (retain, nonatomic) NSArray *preload;
@property (retain, nonatomic) WCAdDynamicCanvasDSLFallbackInfo *fallback;
@property (retain, nonatomic) WCAdDynamicCanvasDSLHalfScreenInfo *halfScreenInfo;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)fromDSLJson:(id)a0;

- (void).cxx_destruct;

@end
