@interface TTVideoEngineVideoStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long videoStyle;
@property (nonatomic) long long dimension;
@property (nonatomic) long long projectionModel;
@property (nonatomic) long long viewSize;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
