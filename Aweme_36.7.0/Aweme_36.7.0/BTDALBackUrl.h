@class NSString;

@interface BTDALBackUrl : NSObject <NSCoding>

@property (copy, nonatomic) NSString *backUrlScheme;
@property (copy, nonatomic) NSString *backUrlHost;
@property (copy, nonatomic) NSString *backUrl;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
