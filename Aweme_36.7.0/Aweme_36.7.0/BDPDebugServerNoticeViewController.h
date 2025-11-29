@class NSString, UIImageView, UILabel, UIButton;
@protocol BDPDebugServerNoticeViewDelegate;

@interface BDPDebugServerNoticeViewController : UIViewController <BDPDebugServerConnectStateListener>

@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *typeStr;
@property (copy, nonatomic) NSString *server;
@property (copy, nonatomic) NSString *localServer;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *text1;
@property (retain, nonatomic) UILabel *text2;
@property (retain, nonatomic) UILabel *text3;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<BDPDebugServerNoticeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked;
- (void)onBackButtonClicked;
- (id)initWithAppId:(id)a0 type:(id)a1 server:(id)a2 localServer:(id)a3 developerName:(id)a4;
- (void)onConnectSuccess;
- (void)onConnectFail:(id)a0;
- (void)showWarningDialog:(id)a0 message:(id)a1 confirm:(id)a2 cancel:(id)a3;
- (void)setMessageLabelAlignmentLeftWithView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
