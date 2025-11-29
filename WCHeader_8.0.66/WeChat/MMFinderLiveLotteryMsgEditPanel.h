@class NSString, MMGrowTextView, UILabel, UIView;

@interface MMFinderLiveLotteryMsgEditPanel : MMFinderLiveLinkPromoteEditPanel <MMGrowTextViewDelegate>

@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) UIView *inputContentBackView;
@property (retain, nonatomic) UILabel *wordCountTips;
@property (retain, nonatomic) NSString *msgTitleText;
@property (retain, nonatomic) NSString *msgPlaceholderText;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutOtherUI;
- (id)titleText;
- (id)placeholderText;
- (id)validUriPrefixes;
- (void)updateConfig;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)fixTopicText:(BOOL)a0;
- (void)layoutWordCountTips;
- (id)stringByRemovingLastEmptyLineInString:(id)a0;
- (double)contentHeight;
- (id)getCurrentLeftButton;
- (void)onLeftButtonAction;
- (void)onRightButtonAction;
- (void).cxx_destruct;

@end
