@class AWEIMFacePuzzleAnsweringProcessViewState, NSString, UIImageView, AWEIMFacePuzzleAnsweringProcessGenerateAnswerView, UIButton, DUXActionPopover, NSMutableArray, UIVisualEffectView, AWEIMFacePuzzleAnsweringProcessQuestionAreaView, UILabel;

@interface AWEIMFacePuzzleAnsweringProcessView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *des;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UILabel *moreBtnLabel;
@property (retain, nonatomic) DUXActionPopover *popoverView;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessQuestionAreaView *questionView;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessGenerateAnswerView *generateAnswerView;
@property (retain, nonatomic) UIVisualEffectView *coverView;
@property (weak, nonatomic) AWEIMFacePuzzleAnsweringProcessViewState *uiState;
@property (retain, nonatomic) UILabel *activityNameLabel;
@property (retain, nonatomic) UILabel *leftTimeA;
@property (retain, nonatomic) UILabel *leftTimeB;
@property (retain, nonatomic) UILabel *leftTimeC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_initProps;
- (id)initWithUIState:(id)a0;
- (void)p_addSubViews;
- (void)p_addConstraints;
- (void)p_addBinds;
- (void)p_closeBtnTap;
- (void)p_moreBtnTap;
- (void).cxx_destruct;
- (id)menuActions;

@end
