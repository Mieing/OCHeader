@class NSArray, UILabel, UIView, UIButton;
@protocol IESLiveAnimatedViewProtocol, IESLiveApplyDetailFastMatchEntryView;

@interface IESLiveInteractionApplyDetailPopupView : UIView

@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UIButton *cancelApplyButton;
@property (retain, nonatomic) UIView *centerConnectionContainerView;
@property (retain, nonatomic) UIView<IESLiveAnimatedViewProtocol> *animationView;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UILabel *waitingCountLabel;
@property (retain, nonatomic) UIButton *addReasonBtn;
@property (retain, nonatomic) UIView *reasonContentView;
@property (retain, nonatomic) id<IESLiveApplyDetailFastMatchEntryView> fastMatchEntryView;
@property (retain, nonatomic) NSArray *waitingUserList;
@property (nonatomic) long long totalWaitingUserCount;
@property (nonatomic) long long fastMatchEntryStyle;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ cancelApplyBlock;
@property (copy, nonatomic) id /* block */ didEditedReason;
@property (copy, nonatomic) id /* block */ didStartFastMatch;

+ (void)showEditReasonPopupViewWithDIContext:(id)a0 trackCallback:(id /* block */)a1 editReasonCallback:(id /* block */)a2;

- (void)refreshReasonContent:(id)a0;
- (void)setupWithWatingUserList:(id)a0 totalWaitingUserCount:(long long)a1;
- (void)refreshFastMatchEntryWithStatus:(unsigned long long)a0;
- (void)emphasizeFastMatchEntry;
- (id)applyContentViewWithList:(id)a0;
- (void)changeBottomStyleWithReason:(id)a0;
- (void)setupUIAppearanceByFastMatchEntryStyle:(long long)a0;
- (void)cancelApply:(id)a0;
- (void)addReasonAction:(id)a0;
- (void)showEditModeSelecter;
- (void)triggerFastMatch;
- (void).cxx_destruct;
- (void)setupUI;

@end
