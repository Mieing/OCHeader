@class AWESearchAIGCInputImageInfo, DUXLoadingCircleView, UIImageView, NSString, UIView, UIButton;

@interface AWESearchAIGCInputImageContainer : UIView <AWESearchAIGCInputImageContainerProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) AWESearchAIGCInputImageInfo *imageInfo;
@property (copy, nonatomic) id /* block */ deleteButtonClick;
@property (copy, nonatomic) id /* block */ retryButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteButtonClicked:(id)a0;
- (void)retryButtonClicked:(id)a0;
- (void)updateWithImageInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
