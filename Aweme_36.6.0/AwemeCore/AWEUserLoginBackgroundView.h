@class AWELoginBackgroundView, UIImageView, AWEUserLoginBackgroundModel;

@interface AWEUserLoginBackgroundView : UIView

@property (retain, nonatomic) AWELoginBackgroundView *fullScreenBgView;
@property (retain, nonatomic) UIImageView *halfScreenThemeBgView;
@property (retain, nonatomic) AWEUserLoginBackgroundModel *model;
@property (readonly, nonatomic) BOOL isAmbientHeadViewShown;

- (void)setupFullScreenUI;
- (void)showHeaderView;
- (void)setupHalfScreenUI;
- (void)p_monitorLoadImage:(unsigned long long)a0 duration:(double)a1 imageURL:(id)a2 imageType:(id)a3 activityId:(id)a4 error:(id)a5;
- (long long)customStatusBarStyle;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)hideHeaderView;
- (void)updateModel;

@end
