@class MMUIImageView, MMUILabel;

@interface WeAppGameJoinTeamHistoryView : MMUIButton

@property (retain, nonatomic) MMUIImageView *leftIconView;
@property (retain, nonatomic) MMUILabel *wordingLable;
@property (retain, nonatomic) MMUIImageView *rightIconView;

- (id)init;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
