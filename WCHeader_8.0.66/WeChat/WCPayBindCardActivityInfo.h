@interface WCPayBindCardActivityInfo : NSObject

@property (nonatomic) unsigned long long activity_id;
@property (nonatomic) unsigned long long activity_type;
@property (nonatomic) unsigned long long award_id;
@property (nonatomic) unsigned int send_record_id;
@property (nonatomic) unsigned int user_record_id;
@property (nonatomic) unsigned long long activity_mch_id;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;

@end
