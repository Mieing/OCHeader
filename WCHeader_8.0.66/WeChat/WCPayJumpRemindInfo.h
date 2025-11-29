@class NSString, WCPayRedirectUrlInfo;

@interface WCPayJumpRemindInfo : NSObject

@property (nonatomic) long long jump_type;
@property (nonatomic) BOOL is_pop_up_windows;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *left_button_wording;
@property (retain, nonatomic) NSString *right_button_wording;
@property (retain, nonatomic) WCPayRedirectUrlInfo *url;

+ (id)GenFromDictionary:(id)a0;
+ (id)genFromJumpRemindInfo:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
