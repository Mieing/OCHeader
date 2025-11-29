@class NSString;

@interface TTAuthCredentials : NSObject <NSCopying>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUsername:(id)a0 password:(id)a1;

@end
