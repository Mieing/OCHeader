@class NSArray, UIView;

@interface IESLiveIntimateChatOperationApplyLoadMoreCell : UITableViewCell

@property (copy, nonatomic) NSArray *moreApplierAvatarURLsCached;
@property (nonatomic) BOOL hasMoreAppliersCached;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *containerView;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateItem:(id)a0;

@end
