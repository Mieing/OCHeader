@class NSString, NSArray;

@interface BDPDynamicPluginModel : NSObject

@property (copy, nonatomic) NSString *localFilePath;
@property (nonatomic) long long type;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *min_jssdk;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *path;

- (void).cxx_destruct;
- (id)description;

@end
