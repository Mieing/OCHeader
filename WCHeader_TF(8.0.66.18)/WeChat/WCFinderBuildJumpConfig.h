@class NSString;

@interface WCFinderBuildJumpConfig : NSObject

@property (copy, nonatomic) NSString *wording;
@property (copy, nonatomic) NSString *recommend_reason;
@property (copy, nonatomic) NSString *report_info;
@property (copy, nonatomic) NSString *icon_url;
@property (nonatomic) int business_type;
@property (copy, nonatomic) NSString *ext_buff_string;

- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
