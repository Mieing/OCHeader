@class UIImageView, WCFinderFeedContentTextView, WCFinderFeedContentVM;

@interface WCFinderFeedWarningTipsView : UIView

@property (retain, nonatomic) UIImageView *warningImageView;
@property (retain, nonatomic) WCFinderFeedContentTextView *warningTextView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long style;

- (id)init;
- (void)setUpUI;
- (void)updateStyle:(unsigned long long)a0;
- (BOOL)checkShowWithContentVM:(id)a0 maxWidth:(double)a1;
- (id)wording;
- (void)clickAction;
- (void).cxx_destruct;

@end
