@class NSArray;

@interface AWEGDCacheRenderConfigModel : NSObject

@property (nonatomic) int validTime;
@property (retain, nonatomic) NSArray *checkRouterKeys;
@property (retain, nonatomic) NSArray *allowCacheComponentsArray;
@property (nonatomic) BOOL isRenderCache;
@property (nonatomic) BOOL isPreRequest;
@property (retain, nonatomic) NSArray *blackFilterDoorRule;

+ (id)defaultConfigModel;

- (void).cxx_destruct;

@end
