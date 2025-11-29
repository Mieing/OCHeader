@class NSString, NSDictionary;

@interface ALSLURI : NSObject <NSCopying>

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL useUniversalLinks;
@property (nonatomic) unsigned long long degradeType;
@property (copy, nonatomic) NSString *degradeH5Url;
@property (copy, nonatomic) NSString *backUrl;
@property (copy, nonatomic) NSString *bc_fl_src;
@property (copy, nonatomic) NSDictionary *extraParam;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
