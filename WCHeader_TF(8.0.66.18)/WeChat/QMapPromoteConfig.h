@class NSDictionary;

@interface QMapPromoteConfig : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) unsigned int maxZoom;
@property (readonly, nonatomic) unsigned int minZoom;
@property (readonly, copy, nonatomic) NSDictionary *json;

- (id)initWithDict:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
