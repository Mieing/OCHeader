@class NSString;

@interface WCPayBindCardActivityChangeInfo : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *btn_text;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tinyapp_name;
@property (retain, nonatomic) NSString *tinyapp_logo;
@property (retain, nonatomic) NSString *tinyapp_desc;
@property (retain, nonatomic) NSString *tinyapp_username;
@property (retain, nonatomic) NSString *tinyapp_path;
@property (retain, nonatomic) NSString *activity_tinyapp_btn_text;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
