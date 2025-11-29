@class NSString;

@interface RTVXRPushTokenCacheInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) double timeStamp;

- (id)initWithToken:(id)a0 userID:(id)a1 timstamp:(double)a2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
