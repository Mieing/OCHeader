@class NSString;

@interface BDPModelEmployee : NSObject <NSCoding>

@property (nonatomic) long long order;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) long long follow_count;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *aweme_uid;
@property (nonatomic) long long cert_type;

- (void).cxx_destruct;

@end
