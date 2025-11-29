@class NSString;

@interface WCPayFetchQAInfoItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long jump_type;
@property (copy, nonatomic) NSString *jump_url;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *path;

+ (id)GenFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
