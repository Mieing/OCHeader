@class NSString, NSArray;

@interface WCFinderJumpNativeAdParams : NSObject

@property (nonatomic) unsigned long long canvasId;
@property (copy, nonatomic) NSString *uxinfo;
@property (nonatomic) BOOL noStore;
@property (nonatomic) BOOL preLoad;
@property (copy, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) NSArray *relatedPageIds;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
