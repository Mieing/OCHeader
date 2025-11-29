@class NSString;

@interface WAAlertModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *okButton;
@property (copy, nonatomic) id /* block */ okButtonClickedAction;
@property (retain, nonatomic) NSString *cancelButton;
@property (copy, nonatomic) id /* block */ cancelButtonClickedAction;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) id /* block */ alertDidShowAction;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) id /* block */ showEvent;

- (id)initWithTitle:(id)a0 message:(id)a1 okButton:(id)a2 cancelButton:(id)a3 okButtonClickedAction:(id /* block */)a4 cancelButtonClickedAction:(id /* block */)a5;
- (void)show;
- (void).cxx_destruct;

@end
