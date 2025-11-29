@class NSDictionary, NSArray;

@interface VCMDLImagerConfig : NSObject

@property BOOL enable;
@property BOOL parsed;
@property (nonatomic) BOOL enableWhiteList;
@property (nonatomic) BOOL enableBlockList;
@property (copy, nonatomic) NSDictionary *configs;
@property (nonatomic) long long baseDelayMs;
@property (copy, nonatomic) NSArray *connectTimeout;
@property (copy, nonatomic) NSArray *readTimeout;

- (long long)baseDelayMs:(id)a0;
- (id)readTimeout:(id)a0;
- (id)connectTimeout:(id)a0;
- (BOOL)check:(id)a0 scene:(id)a1 source:(id)a2;
- (void)parseDict:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
