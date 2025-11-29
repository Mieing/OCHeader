@class NSString;

@interface WCPayOfflinePayBlockLayer : NSObject

@property (nonatomic) unsigned int view_id;
@property (nonatomic) unsigned int is_show_block_layer;
@property (nonatomic) unsigned int waiting_time;
@property (retain, nonatomic) NSString *main_wording;
@property (retain, nonatomic) NSString *reminder_content;
@property (retain, nonatomic) NSString *repayment_tiny_app_username;
@property (retain, nonatomic) NSString *repayment_tiny_app_path;

- (void).cxx_destruct;

@end
