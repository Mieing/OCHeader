@class NSString, UIImageView, AWEBarrageModel, UIView;

@interface AWEAwemeBarrageBaseView : UIView <AWEAwemeBarrageBaseViewProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEBarrageModel *model;
@property (nonatomic) BOOL isShortStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)configureWithFrame:(id)a0;
- (BOOL)shouldResponseEventOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateStyle;
- (void).cxx_destruct;
- (void)pause;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)resetLayer:(id)a0;
- (void)playAnimation;

@end
