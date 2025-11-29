@class NSString, NSNumber;

@interface BDXBridgeEnterHunterVideoFullscreenMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *canScroll;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSNumber *awemeIndex;
@property (copy, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSNumber *pausePlay;
@property (retain, nonatomic) NSNumber *autoEnterFullscreen;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
