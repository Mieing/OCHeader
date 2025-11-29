@class NSString;

@interface WalletLockInfo : NSObject

@property (copy, nonatomic) NSString *wallet_lock_title;
@property (copy, nonatomic) NSString *wallet_lock_desc;
@property (copy, nonatomic) NSString *wallet_lock_logo_url;
@property (nonatomic) long long wallet_lock_status;
@property (copy, nonatomic) NSString *wallet_lock_status_name;
@property (nonatomic) BOOL is_open_touch_pay;
@property (copy, nonatomic) NSString *fingerdata;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
