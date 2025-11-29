@class MMFinderLiveCommentBlurButtonBackView;

@interface MMFinderLiveCommentButton : WCLiveBottomTextButton

@property (readonly, nonatomic) MMFinderLiveCommentBlurButtonBackView *commentBlurBackView;
@property (nonatomic) BOOL isSynchronizeLayout;
@property (copy, nonatomic) id /* block */ commentTalkButtonDidTapBlock;
@property (copy, nonatomic) id /* block */ emoticonInputButtonDidTapBlock;
@property (copy, nonatomic) id /* block */ commentButtonHiddenChangeCallback;
@property (copy, nonatomic) id /* block */ commentButtonAlphaChangeCallback;

- (id)getBlurButtonBackView;
- (void)setHidden:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (void)updateCanShowTalkButton:(BOOL)a0;
- (void)updateCanShowEmoticonInputButton:(BOOL)a0;
- (void)onCommentTalkButtonClick;
- (void)onEmoticonInputButtonClick;
- (void).cxx_destruct;

@end
