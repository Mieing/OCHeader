@class UILabel, HTSLiveAvatarImageView, UIView;

@interface IESLiveExplainWindowInfoView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatar;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *playerContainer;
@property (nonatomic) BOOL isLandscape;

- (void)updateMsgHidden:(BOOL)a0;
- (void)changeDisplayFor:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
