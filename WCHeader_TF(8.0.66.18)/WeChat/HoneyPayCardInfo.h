@class NSString;

@interface HoneyPayCardInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long total_credit_line;
@property (nonatomic) unsigned long long use_credit_line;
@property (nonatomic) unsigned long long unuse_credit_line;
@property (retain, nonatomic) NSString *payer_username;
@property (nonatomic) unsigned long long hide_credit_line;
@property (nonatomic) unsigned long long card_type;
@property (retain, nonatomic) NSString *card_type_name;
@property (retain, nonatomic) NSString *icon_url;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
