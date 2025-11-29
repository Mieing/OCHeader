@class NSString, UITextField, CContact;
@protocol MMSayHelloViewControllerDelegate;

@interface MMSayHelloViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, PBMessageObserverDelegate> {
    unsigned int m_eventID;
}

@property (retain, nonatomic) UITextField *sayHelloTextView;
@property (retain, nonatomic) NSString *helloContent;
@property (retain, nonatomic) CContact *helloReceiver;
@property (weak, nonatomic) id<MMSayHelloViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)doSayHello:(id)a0;
- (void)onSendSayHello:(id)a0;
- (void)onCancelSendSayHello;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)onBeginEdit:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)quitSayHello;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
