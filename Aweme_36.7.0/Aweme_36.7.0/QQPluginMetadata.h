@class NSString, NSDictionary;

@interface QQPluginMetadata : NSObject <NSSecureCoding>

@property (nonatomic) int ApiVersion;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *iconFiles;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
