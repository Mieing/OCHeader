@class NSString;

@interface TTVideoEnginePlayItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *playURL;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long expire;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
