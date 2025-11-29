@class NSDictionary, UIImage, NSString;

@interface AWEIMProjectXConfigManager : NSObject <AWEIMProjectXConfigManagerProtocol>

@property (retain, nonatomic) NSDictionary *messageConfig;
@property (readonly, nonatomic) UIImage *profile_send_msg_btn_icon;
@property (readonly, nonatomic) NSString *alert_install_transfer_title;
@property (readonly, nonatomic) UIImage *share_board_im_icon;
@property (readonly, nonatomic) UIImage *share_board_im_red_envelope_icon;
@property (readonly, nonatomic) NSString *videoRedEnvelopeMessage;
@property (readonly, nonatomic) NSString *redEnvelopeMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)syncConfig;
- (id)messageConfigForProjectXMessage:(id)a0;
- (id)floatingConfigForProjectXMessage:(id)a0;
- (BOOL)hasConfigForProjectXMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
