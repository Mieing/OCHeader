@interface IESIMBDCacheConfig : NSObject

@property (nonatomic) long long diskSizeLimitBytes;
@property (nonatomic) long long diskAgeLimitSeconds;
@property (nonatomic) BOOL cleanByAccess;
@property (nonatomic) BOOL enable;

+ (id)modelCustomPropertyMapper;

- (id)description;

@end
