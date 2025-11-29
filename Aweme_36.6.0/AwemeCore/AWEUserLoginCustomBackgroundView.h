@class AWELoginBackgroundView, AWEUserLoginBackgroundModel;

@interface AWEUserLoginCustomBackgroundView : AWEUserLoginBackgroundView

@property (retain, nonatomic) AWELoginBackgroundView *fullScreenBgView;
@property (retain, nonatomic) AWEUserLoginBackgroundModel *model;
@property (nonatomic) BOOL hasAvatarView;

- (void)setupFullScreenUI;
- (id)initWithModel:(id)a0 hasAvatarView:(BOOL)a1;
- (long long)customStatusBarStyle;
- (void).cxx_destruct;
- (void)setupUI;

@end
