@class AWEUserButtonStateMachine, UIImageView, UIView, AWEUserModel, UIButton;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEUserRecommendCollectionViewUserCell : AWEUserRecommendCollectionViewBaseCell

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIButton *editAliasButton;
@property (retain, nonatomic) UIImageView *verificationImageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEUserButtonStateMachine *stateMachine;

- (void)configWithModel:(id)a0;
- (void)onSelected;
- (void)onModelUpdated;
- (void)p_close;
- (void)p_setupAccessibility;
- (void)p_clickFollow;
- (void)p_enterLiveRoom;
- (void)p_refreshLiveStatus;
- (void)p_updateAccessibilityActions;
- (id)p_livingMarkViewGradientColors:(BOOL)a0;
- (id)p_vsSchema;
- (void)p_editAlias;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewModel:(id)a0;
- (void)willDisplay;

@end
