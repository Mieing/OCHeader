@class ACCHashtagStickerEditStateErrorView, ACCHashtagStickerEditStateEmptyView, ACCHashtagStickerEditStateLoadingView;

@interface ACCHashtagStickerEditStateView : UIView

@property (retain, nonatomic) ACCHashtagStickerEditStateLoadingView *loadingView;
@property (retain, nonatomic) ACCHashtagStickerEditStateEmptyView *emptyView;
@property (retain, nonatomic) ACCHashtagStickerEditStateErrorView *errorView;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) id /* block */ errorRetryBlock;

- (void)syncKeyboardStateToSubviews;
- (void)textBeginEditingWithKeyboardHeight:(double)a0;
- (void)textEndEditing;
- (void).cxx_destruct;
- (id)init;
- (void)setState:(long long)a0;
- (void)setupUI;

@end
