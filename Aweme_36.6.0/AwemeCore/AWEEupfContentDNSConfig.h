@class NSNumber, NSString;

@interface AWEEupfContentDNSConfig : NSObject

@property (retain, nonatomic) NSNumber *httpdns_enabled;
@property (retain, nonatomic) NSNumber *dns_race_enabled;
@property (retain, nonatomic) NSNumber *prefer_httpdns_enabled;
@property (retain, nonatomic) NSNumber *mode_single_type;
@property (retain, nonatomic) NSNumber *skip_cache;
@property (copy, nonatomic) NSString *prefer_ip;
@property (copy, nonatomic) NSString *backup_ip;
@property (retain, nonatomic) NSNumber *httpdns_timeout_s;
@property (retain, nonatomic) NSNumber *localdns_timeout_s;
@property (retain, nonatomic) NSNumber *get_alias;

- (void).cxx_destruct;
- (id)toString;

@end
