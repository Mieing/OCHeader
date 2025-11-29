@class MMUILabel, UITableView, NSArray, NSString, UIButton;
@protocol SolitaireGetPhoneNumberSheetDelegate;

@interface SolitaireGetPhoneNumberSheet : WAPageSheet <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMUILabel *infoLabel;
@property (retain, nonatomic) UIButton *comfirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITableView *phoneListTableView;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (weak, nonatomic) id<SolitaireGetPhoneNumberSheetDelegate> phoneSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhoneNumbers:(id)a0;
- (void)loadSubViews;
- (void)layoutSubViews;
- (double)contentHeight;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)onTapComfirmButton:(id)a0;
- (void)onTapCancelButton;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;

@end
