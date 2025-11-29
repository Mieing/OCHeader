@class MMUIButton, UIView;

@interface MMFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView

@property (nonatomic) BOOL canShowTalkButton;
@property (nonatomic) BOOL canShowEmoticonInputButton;
@property (retain, nonatomic) UIView *seperateLineView;
@property (retain, nonatomic) MMUIButton *commentTalkButton;
@property (retain, nonatomic) MMUIButton *emoticonInputButton;

- (void)layoutUI;
- (void)layoutCommentTalkButton;
- (void)layoutSeperateLineView;
- (void)layoutEmotionInputButton;
- (void).cxx_destruct;

@end
