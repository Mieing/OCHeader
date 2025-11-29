@class UIStackView, UIView, MASConstraint, AWEButton, NSString, UIImageView, AWEUserNameLabel, CAGradientLayer, YYLabel, NSMutableArray, UILabel, AFDStoryMusicView;
@protocol AWEPlayInteractionMusicElementViewModelProtocol, AWEPlayInteractionAuthorElementViewModelProtocol;

@interface AFDStoryPlayInteractionAuthorElement : AWEPlayInteractionBaseElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEUserMessage, AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionAuthorElementViewModelProtocol> viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *authorStackView;
@property (retain, nonatomic) AWEButton *authorButton;
@property (retain, nonatomic) AWEUserNameLabel *authorLabel;
@property (retain, nonatomic) CAGradientLayer *authorNameMaskLayer;
@property (retain, nonatomic) UILabel *timeStampLabel;
@property (retain, nonatomic) UIImageView *verifiedIconView;
@property (retain, nonatomic) UIView *dummyView;
@property (retain, nonatomic) AFDStoryMusicView *musicView;
@property (retain, nonatomic) YYLabel *awemeDescLabel;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL hasBindObserverForMask;
@property (copy, nonatomic) id /* block */ tagViewSlideAction;
@property (retain, nonatomic) NSMutableArray *slideViews;
@property (retain, nonatomic) MASConstraint *oneViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *twoViewHeightConstraint;
@property (retain, nonatomic) id<AWEPlayInteractionMusicElementViewModelProtocol> musicViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)isAuthorButtonNeedHideWithModel:(id)a0;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)initializeElement;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (id)aAWEPadModuleAdapter;
- (void)onAuthorLabelClicked:(id)a0;
- (void)onMusicButtonClicked:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateAuthorLabel;
- (void)updateTimeStampLabel;
- (BOOL)isVerifiedIconViewNeedHideWithModel:(id)a0;
- (void)bindObserverForMask;
- (void)onVerifiedIconClicked:(id)a0;
- (id)realShowAuthor:(id)a0;
- (void)updateVerifiedIconView;
- (void)setVideoPlayerLogExtra;
- (BOOL)musicTrackAlertIfNotValid;
- (double)elementWidthWithAweme:(id)a0;
- (double)adaptiveLength:(double)a0;
- (double)authorLabelMaxWidth;
- (void)updateAuthorStackViewSpacing;
- (void)updateAuthorNameMask;
- (void)startStoryTagViewAnimationIfNeeded;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (unsigned long long)elementType;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;
- (unsigned long long)elementPosition;
- (id)shareDescription;

@end
