@class UIView;
@protocol AWEIMMessageCellTagViewInterface;

@interface AWEIMGroupMemberBlockTableViewCell : AWEIMUserTableViewCell

@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *roleTagView;

+ (id)identifier;

- (void)configRoleTagLabel:(long long)a0 couldSelected:(BOOL)a1;
- (void).cxx_destruct;

@end
