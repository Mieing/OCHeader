@class NSMutableArray, AWEIMFacePuzzleAnsweringPlayerInfoUIState, UIImageView, UILabel, DUXLoadingParticleView, UIButton;

@interface AWEIMFacePuzzleAnsweringPlayerView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *titlelabel;
@property (retain, nonatomic) UILabel *decLabel;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) DUXLoadingParticleView *refreshLoadingView;
@property (retain, nonatomic) NSMutableArray *binds;
@property (weak, nonatomic) AWEIMFacePuzzleAnsweringPlayerInfoUIState *uiState;

- (void)p_addConstraint;
- (void)p_addSubView;
- (void)p_addBind;
- (void)p_backTapAction;
- (id)initWithUIState:(id)a0;
- (void).cxx_destruct;

@end
