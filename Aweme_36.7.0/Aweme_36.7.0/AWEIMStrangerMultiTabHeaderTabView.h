@class AWEIMStrangerMultiTabHeaderTabModel, UILabel, UIView;

@interface AWEIMStrangerMultiTabHeaderTabView : UIView

@property (nonatomic) long long index;
@property (retain, nonatomic) AWEIMStrangerMultiTabHeaderTabModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *unreadView;
@property (retain, nonatomic) UILabel *unreadLabel;
@property (retain, nonatomic) UIView *titleContainer;

- (void)configWithModel:(id)a0;
- (void)refersh;
- (void).cxx_destruct;

@end
