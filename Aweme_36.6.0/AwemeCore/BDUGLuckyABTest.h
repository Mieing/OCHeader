@class NSDictionary;

@interface BDUGLuckyABTest : NSObject

@property (copy, nonatomic) NSDictionary *abTestSettings;

+ (id)sharedInstance;

- (BOOL)isNewContainerWithUrlPath:(id)a0 forceNew:(BOOL)a1;
- (BOOL)isNewContainerWithUrlPath:(id)a0;

@end
