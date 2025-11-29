@class NSMutableDictionary;

@interface AWEPassportNetFrequencyConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *frequencyMap;

+ (BOOL)networkFrequencyHavePathUrl:(id)a0;
+ (BOOL)requestUrlIsInFrequencyTime:(id)a0;
+ (id)urlTransformPath:(id)a0;
+ (id)networkFrequencyConfig;
+ (BOOL)shouldRequestNetworkWithUrl:(id)a0;
+ (void)requestErrorWithUrl:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
