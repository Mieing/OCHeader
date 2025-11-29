@class NSString;
@protocol AWEIMCardMessageViewModelInterface;

@interface AWEIMFeedContentProps : AWEIMUIViewPresenterProps

@property (nonatomic) BOOL showLoading;
@property (weak, nonatomic) id<AWEIMCardMessageViewModelInterface> viewModel;
@property (retain, nonatomic) NSString *fansGroupDigCountDesc;
@property (copy, nonatomic) id /* block */ coverTappedActionBlock;
@property (nonatomic) BOOL enableAvatarClickAction;

- (void).cxx_destruct;

@end
