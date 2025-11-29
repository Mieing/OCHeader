@class NSString;

@interface AWEDataLayerBaseDatabaseConfig : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL useQueue;

- (void).cxx_destruct;
- (BOOL)validateConfig;

@end
