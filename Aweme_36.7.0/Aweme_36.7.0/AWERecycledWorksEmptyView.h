@class DUXBaseLabel, DUXBaseImageView, NSString;

@interface AWERecycledWorksEmptyView : UIView

@property (retain, nonatomic) DUXBaseImageView *deleteIcon;
@property (retain, nonatomic) DUXBaseLabel *tipsLabel;
@property (retain, nonatomic) DUXBaseLabel *subTipsLabel;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *subTips;

- (id)initWithIconName:(id)a0 tips:(id)a1 subTips:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
