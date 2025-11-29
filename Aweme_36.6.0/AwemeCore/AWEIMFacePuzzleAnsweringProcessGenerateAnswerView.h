@class NSMutableArray, UIImageView, LOTAnimationView, UILabel, UIView, AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState;

@interface AWEIMFacePuzzleAnsweringProcessGenerateAnswerView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *processLabel;
@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UILabel *recapLabel;
@property (retain, nonatomic) UIView *recapBtn;
@property (weak, nonatomic) AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState *uiState;
@property (retain, nonatomic) NSMutableArray *binds;

- (void)p_initProps;
- (id)initWithUIState:(id)a0;
- (void)p_addSubViews;
- (void)p_addBinds;
- (void)p_addConStraints;
- (void)p_addGes;
- (void)p_handleErrorTap;
- (id)p_answeringSettings;
- (void).cxx_destruct;

@end
