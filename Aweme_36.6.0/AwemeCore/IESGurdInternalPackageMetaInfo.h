@class NSString;

@interface IESGurdInternalPackageMetaInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *packagePath;
@property (nonatomic) long long fileType;
@property long long dataAccessPolicy;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long packageId;
@property (copy, nonatomic) NSString *bundleName;

+ (id)metaInfoWithDictionary:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
