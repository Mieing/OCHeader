@class UILabel, MBCircularProgressBarView, NSString;

@interface AWECommentVideoPublishProgressView : UIView <AWEPublishTaskMessage>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MBCircularProgressBarView *circleProgressBar;
@property (copy, nonatomic) NSString *textStr;
@property (nonatomic) BOOL isInPublish;
@property (copy, nonatomic) id /* block */ endPublishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textStr:(id)a1;
- (void)beginPublish;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end
