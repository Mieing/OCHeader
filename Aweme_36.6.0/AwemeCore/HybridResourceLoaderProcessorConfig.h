@class NSArray;

@interface HybridResourceLoaderProcessorConfig : NSObject

@property (copy, nonatomic) NSArray *highProcessorProviderArray;
@property (copy, nonatomic) NSArray *lowProcessorProviderArray;
@property (nonatomic) BOOL disableDefaultProcessors;
@property (copy, nonatomic) NSArray *defaultProcessorsSequence;

- (void).cxx_destruct;

@end
