@class HTSEventContext, NSString, UIView, IESLiveInteractionKTVMusicFeedbackHeaderView, IESLiveInteractFeedbackViewModel, UIButton, IESLiveInteractFeedbackView, UILabel;
@protocol IESLiveSubscription, IESLiveTracker;

@interface IESLiveInteractionKTVMusicFeedbackView : UIView

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *confirmString;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *navationLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) IESLiveInteractFeedbackView *feedbackView;
@property (retain, nonatomic) IESLiveInteractionKTVMusicFeedbackHeaderView *headerView;
@property (retain, nonatomic) id<IESLiveSubscription> selectedCategoryDisposable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (nonatomic) long long scaleRatio;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (copy, nonatomic) NSString *songNameInputText;
@property (copy, nonatomic) NSString *singerNameInputText;
@property (copy, nonatomic) NSString *showPage;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ clickedBackAction;
@property (nonatomic) BOOL isShowInIndependentContainer;
@property (nonatomic) BOOL isKeyBoardShowing;
@property (nonatomic) BOOL isPartyKTVAndSelfSing;

- (void)didTapConfirmButton;
- (void)p_layoutUI;
- (id)initWithTrackContext:(id)a0 tracker:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 title:(id)a3 isSoloKTV:(BOOL)a4;
- (void)p_updateConfirmButtonEnabled;
- (void)p_setupFeedbackViewWithModel:(id)a0;
- (id)initWithTrackContext:(id)a0 tracker:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 title:(id)a3;
- (void)didHideMusicFeedbackView;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;

@end
