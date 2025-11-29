@class AWEECOMIMChatListTopNotifyView;

@interface AWEECOMIMChatListTopNotifyCell : UITableViewCell

@property (retain, nonatomic) AWEECOMIMChatListTopNotifyView *notifyView;
@property (copy, nonatomic) id /* block */ cardWillDisplayBlock;
@property (copy, nonatomic) id /* block */ cardClickBlock;

+ (double)cellHeightWithDataSource:(id)a0 cellWidth:(double)a1;
+ (id)identifier;

- (void)setupSubView;
- (void)configCellWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
