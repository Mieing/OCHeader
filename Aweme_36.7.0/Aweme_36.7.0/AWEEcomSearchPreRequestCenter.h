@class NSMutableDictionary;

@interface AWEEcomSearchPreRequestCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedDict;

+ (id)sharedCenter;

- (id)preRequestManagerWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;

@end
