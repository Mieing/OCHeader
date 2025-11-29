@class NSString, NSDictionary;

@interface AWEMallPrefetchProcessorConfig : NSObject

@property (copy, nonatomic) NSString *prefetchKey;
@property (copy, nonatomic) NSDictionary *prefetchApiConfigMap;
@property (copy, nonatomic) NSDictionary *prefetchImagesConfigMap;
@property (copy, nonatomic) NSString *mallPrefetchImageKey;

- (void).cxx_destruct;

@end
