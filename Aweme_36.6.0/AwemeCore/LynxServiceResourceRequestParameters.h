@class NSNumber, NSString;

@interface LynxServiceResourceRequestParameters : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *enableRequestReuse;
@property (nonatomic) long long resourceScene;
@property (copy, nonatomic) NSString *templateUrl;

- (id)onlyLocal;
- (id)onlyPath;
- (id)waitLocalResourceUpdate;
- (id)disableLocalResource;
- (id)disableRemoteResource;
- (id)disableRemoteResourceCache;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
