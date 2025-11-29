@class NSString, NSDictionary, AWEFollowGroupAddMemberView, NSNumber;

@interface AWEFollowGroupUserListView : UIView

@property (nonatomic) BOOL showAddButton;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEFollowGroupAddMemberView *addView;

- (void)__setupView;
- (void)configWithUserList:(id)a0 memberCount:(long long)a1;
- (void).cxx_destruct;
- (id)initWithMaxCount:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
