@class NSString;

@interface BDXBridgeShareRankMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *share_url;
@property (copy, nonatomic) NSString *share_title;
@property (copy, nonatomic) NSString *share_link_desc;
@property (copy, nonatomic) NSString *active_time;
@property (copy, nonatomic) NSString *edition_id;
@property (copy, nonatomic) NSString *list_name;
@property (retain, nonatomic) id is_valentines_day;
@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *influenceValue;
@property (copy, nonatomic) NSString *avatar_url;
@property (copy, nonatomic) NSString *name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
