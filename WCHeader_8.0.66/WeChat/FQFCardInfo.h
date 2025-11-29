@class NSString;

@interface FQFCardInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long fqf_avail_quota;
@property (nonatomic) unsigned long long fqf_interest_rate;
@property (nonatomic) double fqf_interest_amount;
@property (retain, nonatomic) NSString *fqf_pay_desk_title;
@property (retain, nonatomic) NSString *fqf_title;
@property (retain, nonatomic) NSString *fqf_sub_title;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
