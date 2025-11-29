@class UILabel, MBCircularProgressBarView, NSString;

@interface AWECommentImagePublishProgressView : UIView <AWECommentMediaUploadMessage, AWECommentImagePublishProgressViewProtocol>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MBCircularProgressBarView *circleProgressBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskProgressDidChangeWithInfo:(long long)a0;
- (void)beginPublish;
- (void)resetPublish;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end
