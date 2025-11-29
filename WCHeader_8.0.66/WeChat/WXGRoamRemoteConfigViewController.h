@class NSString, UITextField, NSMutableArray, UIButton;

@interface WXGRoamRemoteConfigViewController : MMUIViewController <UITextFieldDelegate> {
    NSString *path;
}

@property (retain, nonatomic) UITextField *deviceText;
@property (retain, nonatomic) UITextField *domainText;
@property (retain, nonatomic) UITextField *portText;
@property (retain, nonatomic) UITextField *ticketText;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) NSMutableArray *textArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setupMainView;
- (void)getTextCache;
- (BOOL)saveTextToCache;
- (BOOL)deleteCache;
- (void)onSave;
- (void)onDelete;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;

@end
