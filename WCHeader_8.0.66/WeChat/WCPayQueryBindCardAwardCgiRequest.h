@class NSString;

@interface WCPayQueryBindCardAwardCgiRequest : NSObject

@property (nonatomic) unsigned long long activity_id;
@property (nonatomic) unsigned long long activity_type;
@property (nonatomic) unsigned long long award_id;
@property (nonatomic) unsigned int send_record_id;
@property (nonatomic) unsigned int user_record_id;
@property (nonatomic) unsigned long long activity_mch_id;
@property (retain, nonatomic) NSString *bank_type;
@property (retain, nonatomic) NSString *bank_serial;
@property (nonatomic) unsigned int bindbankscene;
@property (nonatomic) unsigned int realname_scene;

- (id)queryDictionary;
- (void).cxx_destruct;

@end
