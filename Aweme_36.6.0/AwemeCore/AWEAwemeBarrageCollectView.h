@class YYLabel;

@interface AWEAwemeBarrageCollectView : AWEAwemeBarrageBaseView

@property (retain, nonatomic) YYLabel *authorLabel;
@property (retain, nonatomic) YYLabel *contentLabel;

- (void)configureUI;
- (void)configureWithFrame:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)prepareForReuse;
- (void)resume;
- (void)playAnimation;

@end
