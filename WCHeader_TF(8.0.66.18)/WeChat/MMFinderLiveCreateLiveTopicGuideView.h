@class NSString, MMTextView, MMUILabel;
@protocol MMFinderLiveCreateLiveTopicGuideViewDelegate;

@interface MMFinderLiveCreateLiveTopicGuideView : UIView <UITextViewDelegate>

@property (retain, nonatomic) MMTextView *topicTextView;
@property (retain, nonatomic) MMUILabel *limitTipsView;
@property (retain, nonatomic) NSString *placeHolder;
@property (nonatomic) long long maxTitleLength;
@property (retain, nonatomic) NSString *customAccessibilityLabel;
@property (nonatomic) BOOL isCurrentContentValid;
@property (nonatomic) BOOL shouldForceEndEditing;
@property (weak, nonatomic) id<MMFinderLiveCreateLiveTopicGuideViewDelegate> delegate;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) NSString *topicTitle;
@property (readonly, nonatomic) NSString *limitedTopicTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaceHolder:(id)a0 maxTitleLength:(long long)a1 customAccessibilityLabel:(id)a2;
- (void)initTopicTextView;
- (void)initLimitTipsView;
- (void)layoutSubviews;
- (void)layoutTopicTextView;
- (void)layoutLimitTipsView;
- (void)tryStartEditing;
- (void)tryFinishEditingForce:(BOOL)a0;
- (void)reset;
- (long long)getLengthFromContent:(id)a0;
- (double)getLimitTipsViewHeight;
- (double)getTopAndBottomPadding;
- (void)updateLimitTipsViewContent;
- (void)updateIsCurrentContentValid;
- (void)checkContentHeightChanged;
- (void)textViewDidChange:(id)a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
