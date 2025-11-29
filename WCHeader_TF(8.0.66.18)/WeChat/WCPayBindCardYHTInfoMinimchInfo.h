@class NSString;

@interface WCPayBindCardYHTInfoMinimchInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *minimch_key;
@property (nonatomic) unsigned long long minimch_avail_balance;
@property (nonatomic) unsigned int minimch_user_state;
@property (nonatomic) unsigned int minimch_system_state;
@property (retain, nonatomic) NSString *minimch_ext_msg;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
