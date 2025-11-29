@class NSString;

@interface TTVideoEngineAdaptiveInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mainPlayURL;
@property (copy, nonatomic) NSString *backupPlayURL;
@property (copy, nonatomic) NSString *adaptiveType;

- (id)allURLForVideoID:(id)a0 transformedURL:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
