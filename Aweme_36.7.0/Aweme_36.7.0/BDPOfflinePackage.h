@class NSString;

@interface BDPOfflinePackage : NSObject

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *packageUrl;
@property (copy, nonatomic) NSString *packagePath;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL forceUpdate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
