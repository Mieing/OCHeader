@class NSString, UILabel, AWEEditAIProgressView, UIView;

@interface AWEAIEnhanceLoadingView : UIView <AWEStudioAIEnhanceLoadingViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *progressTextLabel;
@property (retain, nonatomic) UILabel *progressNumLabel;
@property (retain, nonatomic) AWEEditAIProgressView *progressView;
@property (retain, nonatomic) UIView *tagContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTagList:(id)a0;
- (void)dismissWithIsComplete:(BOOL)a0 completion:(id /* block */)a1;
- (void)showWithInitialProgress:(long long)a0;
- (void)setupUI:(id)a0;
- (id)initWithTagList:(id)a0;
- (id)createTextLabel;
- (void)updateTextWithProgress:(long long)a0;
- (id)createTag;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)show;
- (void)updateProgress:(long long)a0;

@end
