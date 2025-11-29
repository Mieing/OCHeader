@class NSDictionary, NSMutableArray;

@interface BDUGLuckyTracker : NSObject

@property (retain, nonatomic) NSMutableArray *paramsBlock;
@property (copy, nonatomic) NSDictionary *samplingSettings;

+ (void)event:(id)a0 params:(id)a1;
+ (void)event:(id)a0 params:(id)a1 needLuckyTeaKey:(BOOL)a2;
+ (BOOL)__shouldUploadEvent:(id)a0;
+ (id)sharedInstance;

- (void)addCommonParamsBlock:(id /* block */)a0;
- (void)updateSamplingSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
