@class NSDictionary, NSString;

@interface VEAmazingEffectConfig : NSObject

@property (retain, nonatomic) NSDictionary *algorithmConfig;
@property (nonatomic) BOOL enableAlgorithmAsync;
@property (copy, nonatomic) NSString *algoCachePath;

- (void).cxx_destruct;

@end
