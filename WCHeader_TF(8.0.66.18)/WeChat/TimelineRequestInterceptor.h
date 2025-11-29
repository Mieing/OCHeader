@class NSMutableDictionary;

@interface TimelineRequestInterceptor : NSObject

@property (retain, nonatomic) NSMutableDictionary *interceptors;

+ (id)sharedInstance;

- (id)init;
- (void)intercept:(id)a0;
- (void)registerInterceptor:(id)a0;
- (void).cxx_destruct;

@end
