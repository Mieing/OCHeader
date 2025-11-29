@class NSString;

@interface QBWupTokenInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) long long maxage;
@property (nonatomic) double saveTime;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
