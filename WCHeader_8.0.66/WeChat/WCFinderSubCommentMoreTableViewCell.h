@class WCFinderAnimationLoadingView, NSString, UILabel, UIButton;

@interface WCFinderSubCommentMoreTableViewCell : UITableViewCell <WCGeneralMonitorCellProtocol>

@property (weak, nonatomic) UILabel *moreInfoLabel;
@property (weak, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long moreType;
@property (weak, nonatomic) UIButton *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setSubMoreType:(unsigned long long)a0 commentMoreCount:(unsigned long long)a1 authorType:(unsigned long long)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setUpUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)setCustomBGColor:(id)a0;
- (id)getGeneralMonitorCellBizId;
- (void).cxx_destruct;

@end
