@class NSArray;

@interface VCMDLImagerConfigItem : NSObject

@property (nonatomic) BOOL enableScene;
@property (nonatomic) BOOL enableSource;
@property (nonatomic) long long baseDelayMs;
@property (copy, nonatomic) NSArray *scenes;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSArray *connectTimeout;
@property (copy, nonatomic) NSArray *readTimeout;

- (void).cxx_destruct;
- (id)init;

@end
