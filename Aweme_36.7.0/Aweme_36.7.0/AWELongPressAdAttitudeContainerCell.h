@class NSArray, NSString, AWEAwemeModel, UILabel, NSMutableArray, UIButton;

@interface AWELongPressAdAttitudeContainerCell : UICollectionViewCell <AWELongPressAdAttitudeContainerCell>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long longPressType;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ updateHeightAnimatedBlock;
@property (retain, nonatomic) NSArray *likeReasons;
@property (retain, nonatomic) NSArray *notInterestingReasons;
@property (retain, nonatomic) NSMutableArray *reasonButtonArray;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIButton *notInterestingButton;
@property (weak, nonatomic) UIButton *clickingButton;
@property (retain, nonatomic) UILabel *chooseAttitudeDescriptionGuideLabel;
@property (nonatomic) BOOL submitFeedbackHasShown;
@property (nonatomic) BOOL hasBeenInit;
@property (nonatomic) BOOL isFromLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)getCellClassWithAweme:(id)a0;
+ (double)initHeightWithAweme:(id)a0;
+ (BOOL)shouldDisplayAdAttitude:(id)a0;

- (id)positiveFilterWordsWithAweme:(id)a0;
- (id)negativeFilterWordsWithAweme:(id)a0;
- (void)feedbackReasonOnClick:(id)a0;
- (void)buttonClickUIChangeHelper:(id)a0;
- (void)configureWithAweme:(id)a0 dismissBlock:(id /* block */)a1 updateHeightAnimatedBlock:(id /* block */)a2 isFromLongPress:(BOOL)a3;
- (void)submitFeedbackButtonOnClick:(id)a0;
- (void)likeButtonOnClick:(id)a0;
- (void)notInterestionButtonOnClick:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
