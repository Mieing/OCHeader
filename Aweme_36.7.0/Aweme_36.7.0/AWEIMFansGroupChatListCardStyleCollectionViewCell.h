@class UILabel, NSString, UIImageView, UIView, AWEIMFansGroupChatListViewModel, UITableView;

@interface AWEIMFansGroupChatListCardStyleCollectionViewCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEIMFansGroupChatListViewModel *viewModel;
@property (retain, nonatomic) UIView *cardBaseView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *placeHolderBaseView;
@property (retain, nonatomic) UIImageView *cardPlaceHolderImageView;
@property (retain, nonatomic) UILabel *cardPlaceHolderLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)__setupUI;
- (void)__transferToConversationWithConversationID:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
