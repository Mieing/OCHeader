@class AWEIMLiveFansGroupInviteViewController;

@interface AWEIMLiveFansGroupInviteMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) AWEIMLiveFansGroupInviteViewController *liveFansGroupInviteVC;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (void)updateBgColorIfNeeded;
- (void)__trackShowData;
- (void).cxx_destruct;
- (void)setupUI;
- (void)willDisplayCell;

@end
