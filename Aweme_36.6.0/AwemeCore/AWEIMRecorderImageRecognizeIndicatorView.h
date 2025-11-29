@class AWEIMRecorderImageRecognizeModel, UIImageView, UIView, UILabel;

@interface AWEIMRecorderImageRecognizeIndicatorView : UIView

@property (retain, nonatomic) AWEIMRecorderImageRecognizeModel *viewModel;
@property (nonatomic) long long state;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL iconIsRotating;

- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (void)__updateImageView;
- (void)__updateText;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
