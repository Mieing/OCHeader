@class NSString;

@interface WCAdDynamicUpdateActionInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *type;
@property (nonatomic) int expireTime;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
