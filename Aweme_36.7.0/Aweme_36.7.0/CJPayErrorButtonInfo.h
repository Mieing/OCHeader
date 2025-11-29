@class NSString, NSNumber;

@interface CJPayErrorButtonInfo : JSONModel

@property (copy, nonatomic) NSString *page_desc;
@property (copy, nonatomic) NSString *button_desc;
@property (copy, nonatomic) NSString *button_type;
@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSString *left_button_desc;
@property (copy, nonatomic) NSNumber *left_button_action;
@property (copy, nonatomic) NSString *right_button_desc;
@property (copy, nonatomic) NSNumber *right_button_action;
@property (copy, nonatomic) NSString *button_status;
@property (copy, nonatomic) NSString *findPwdUrl;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *superLink;
@property (copy, nonatomic) NSString *exts;
@property (copy, nonatomic) NSString *trackExts;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *trackCase;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *jumpURL;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
