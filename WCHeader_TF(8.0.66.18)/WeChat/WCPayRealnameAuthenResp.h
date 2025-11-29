@class NSString, UnderAgeDialog, RealnameHalfPageDialog;

@interface WCPayRealnameAuthenResp : NSObject

@property (retain) NSString *token;
@property BOOL is_need_bind;
@property BOOL is_need_face;
@property BOOL is_need_Laund;
@property (retain) NSString *laundh5;
@property (retain) NSString *error_detail_url;
@property unsigned int scene;
@property (retain) NSString *package;
@property (retain) NSString *packagesign;
@property (retain) UnderAgeDialog *under_age_dialog;
@property (retain, nonatomic) RealnameHalfPageDialog *under_age_mid_dialog;
@property (retain, nonatomic) NSString *under_age_session_id;
@property (retain, nonatomic) NSString *underage_msg_preview;
@property (retain) NSString *addbankword;

- (void).cxx_destruct;

@end
