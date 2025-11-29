@class NSArray, NSString, AWEIMConversationContext, UIView, UITableView;
@protocol AWEIMMessageInteractiveUserDelegate;

@interface AWEIMMessageInteractiveUserListCollectionViewCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *noticeHeaderView;
@property (retain, nonatomic) UIView *noticeFooterView;
@property (copy, nonatomic) NSArray *propertyList;
@property (nonatomic) BOOL isMultiType;
@property (nonatomic) BOOL shouldShowEmoji;
@property (copy, nonatomic) NSString *conversationID;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (weak, nonatomic) id<AWEIMMessageInteractiveUserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)setupUIWithMessage:(id)a0;
- (void)showBottomNotice:(BOOL)a0;
- (void)configWithPropertyList:(id)a0;
- (void).cxx_destruct;
- (double)screenWidth;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
