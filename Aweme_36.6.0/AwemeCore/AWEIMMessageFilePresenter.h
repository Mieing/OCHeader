@class AWEIMSmallCardPresenter, AWEIMUIImageViewPresenter;

@interface AWEIMMessageFilePresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMSmallCardPresenter *smallCard;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *iconBg;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *icon;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)p_updateBGColor:(id)a0 withContext:(id)a1;
- (id)p_makeSmallCardProps;
- (id)p_iconBgProps;
- (id)p_iconProps;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
