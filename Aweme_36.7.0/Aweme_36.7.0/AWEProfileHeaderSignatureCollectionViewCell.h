@class UITapGestureRecognizer, NSArray, AWEProfileHeaderSignatureRiskNoticeView, NSString, AWEProfileHeaderContext, AWEProfileMentionLabel, UIView;
@protocol AWEProfileHeaderSignatureCollectionViewCellDelegate;

@interface AWEProfileHeaderSignatureCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, DUXGridBreakPointResponder, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileMentionLabel *introLabel;
@property (nonatomic) long long penaltyLine;
@property (nonatomic) BOOL hasConsumedRiskNotice;
@property (retain, nonatomic) UIView *introAccessibilityView;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSArray *signatureExtras;
@property (retain, nonatomic) AWEProfileHeaderSignatureRiskNoticeView *noticeView;
@property (weak, nonatomic) id<AWEProfileHeaderSignatureCollectionViewCellDelegate> delegate;
@property (nonatomic) long long numberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)calculateMentionAccessibility;
- (id)padService;
- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void)masReMakeIntroLabelWithBottom:(double)a0;
- (void)p_tapIntroLabel;
- (BOOL)p_isSigExisted;
- (void)p_updateSignature:(id)a0;
- (void)p_hideSignature;
- (BOOL)p_isSameSignatureWithRichText;
- (void)trackIntroductionShowIfNeeded;
- (void)p_foldFirstLineForPenalty:(id)a0 penaltyIndex:(long long)a1;
- (void)p_foldIntroductionForSingLine;
- (void)p_foldIntroduction;
- (void)p_tapMoreLabel;
- (long long)introLabelTextLine;
- (BOOL)p_shouldReportSigShow;
- (void)p_updateSignature;
- (void)checkShowNoticeView;
- (BOOL)p_isSignatureInteractionEnabled;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)containerWidth;

@end
