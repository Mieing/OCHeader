@class NSString;

@interface WCPayBindCardYHTInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *yht_related_bank;
@property (nonatomic) unsigned long long yht_avail_balance;
@property (nonatomic) int yht_user_state;
@property (nonatomic) int yht_system_state;
@property (retain, nonatomic) NSString *yht_ext_msg;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
