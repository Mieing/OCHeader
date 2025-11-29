@class NSString, AWEChallengeModel, UILabel, AWEChallengeFoldingTextView, UIView;
@protocol AWEChallengeDetailIntroductionViewDelegate, AWEChallengeDetailTaskInfoView, AWEStarActivityEntranceViewProtocol, AWEFoldingLabel;

@interface AWEChallengeDetailIntroductionView : UIView <AWEFoldingLabelDelegate, AWEChallengeFoldingTextViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEChallengeFoldingTextView *descriptionTextView;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UIView *descriptionLabelContainer;
@property (nonatomic) BOOL useSelectableView;
@property (weak, nonatomic) id<AWEChallengeDetailIntroductionViewDelegate> delegate;
@property (readonly, nonatomic) UIView<AWEChallengeDetailTaskInfoView> *taskView;
@property (readonly, nonatomic) UIView<AWEFoldingLabel> *descriptionLabel;
@property (readonly, nonatomic) UIView<AWEFoldingLabel> *disclaimerLabel;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) long long halfScreenStyle;
@property (retain, nonatomic) UIView<AWEStarActivityEntranceViewProtocol> *starActivityEntranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferedContentLineHeight;
+ (double)preferedContentLineSpacing;

- (void)updateDescriptionLabelWithChallenge:(id)a0;
- (struct CGSize { double x0; double x1; })layoutWithConstrainedWidth:(double)a0;
- (void)updateWithChallenge:(id)a0;
- (BOOL)label:(id)a0 shouldTreatAsInteractiveElementForCheckingResult:(id)a1;
- (id)label:(id)a0 attributesForCheckingResult:(id)a1;
- (void)buttonDidTapped:(id)a0;
- (void)labelDidUnfold:(id)a0;
- (void)labelDidFold:(id)a0;
- (void)label:(id)a0 didInteractWithURL:(id)a1;
- (BOOL)hasStarUserData:(id)a0;
- (void)updateDescriptionTextViewWithChallenge:(id)a0;
- (void)updateDescriptionTextViewContainerLayoutWithConstrainedWidth:(double)a0 recentlyPositionedView:(id)a1;
- (void)updateDescriptionLabelContainerLayoutWithConstrainedWidth:(double)a0 recentlyPositionedView:(id)a1;
- (void)descriptionLabelContainerTapped:(id)a0;
- (BOOL)isBaike;
- (void)trackBaikeShow;
- (void)descriptionTextViewContainerTapped:(id)a0;
- (id)baikeDocID;
- (void)goToBaike;
- (void)textViewDidUnfold:(id)a0;
- (void)textViewDidFold:(id)a0;
- (void)textView:(id)a0 didInteractWithURL:(id)a1;
- (void)textViewButtonDidTapped:(id)a0;
- (void)textViewDidSearch:(id)a0;
- (void)textViewDidShowSearchMenu:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
