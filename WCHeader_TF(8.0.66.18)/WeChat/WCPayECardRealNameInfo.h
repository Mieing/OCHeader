@class NSString;

@interface WCPayECardRealNameInfo : NSObject

@property (retain, nonatomic) NSString *ecard_open_scene;
@property (retain, nonatomic) NSString *ecard_type;
@property (nonatomic) BOOL show_check_box;
@property (nonatomic) BOOL check_box_selected;
@property (retain, nonatomic) NSString *check_box_left_wording;
@property (retain, nonatomic) NSString *check_box_right_wording;
@property (retain, nonatomic) NSString *check_box_url;
@property (nonatomic) BOOL is_upload_credid;
@property (retain, nonatomic) NSString *upload_credit_url;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
