@class NSString;

@interface WCPayRealnameRegResp : NSObject

@property (retain) NSString *title;
@property (retain) NSString *desc;
@property (retain) NSString *page;
@property (retain) NSString *err_jump_page;
@property (nonatomic) int passport_page_style;
@property (retain, nonatomic) NSString *confirm_btn_title;
@property (retain, nonatomic) NSString *confirm_btn_url;
@property (retain, nonatomic) NSString *cancel_btn_title;
@property (retain, nonatomic) NSString *bottom_wording;
@property (retain, nonatomic) NSString *bottom_url;
@property (retain, nonatomic) NSString *bottom_username;

- (void).cxx_destruct;

@end
