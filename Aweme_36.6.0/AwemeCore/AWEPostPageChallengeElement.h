@class AWENewPublishChallengeTableViewCell, NSString;

@interface AWEPostPageChallengeElement : AWEPostPageCellElement

@property (retain, nonatomic) AWENewPublishChallengeTableViewCell *challengeTableViewCell;
@property (nonatomic) BOOL hasSeleted;
@property (nonatomic) long long keyBoardHide;
@property (retain, nonatomic) NSString *challengeTitle;
@property (nonatomic) long long continueWriteChoose;
@property (nonatomic) BOOL isSug;
@property (nonatomic) BOOL hasShowed;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (BOOL)canShow;
- (id)publishViewModel;
- (void)elementAppear;
- (id)p_commonTrackParams;
- (BOOL)forceReceiveEvents;
- (BOOL)isValidChallengeTitle:(id)a0;
- (void)updateChallengeCellWithChallengeTitle;
- (id)inputService;
- (void)trackWithTrackType:(unsigned long long)a0 swtichStaus:(BOOL)a1;
- (BOOL)setUpChallengeSwitchStates;
- (void)showChallengeElement;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cellClass;
- (id)cell;
- (id)cellIdentifier;
- (void)addObservers;
- (id)challengeService;

@end
