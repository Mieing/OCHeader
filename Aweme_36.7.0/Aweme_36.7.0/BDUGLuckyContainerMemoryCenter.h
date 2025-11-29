@class NSDictionary;

@interface BDUGLuckyContainerMemoryCenter : NSObject

@property (copy, nonatomic) NSDictionary *memoryConfig;

- (id)containerPathWithURLString:(id)a0;
- (void)settingsDidUpdate;
- (id)URLStringWithMemoryStrategy:(id)a0;
- (void)willOpenContainerWithURLString:(id)a0;
- (void).cxx_destruct;

@end
