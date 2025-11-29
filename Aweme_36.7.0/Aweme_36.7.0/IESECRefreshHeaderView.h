@class NSString, UIView;

@interface IESECRefreshHeaderView : MJRefreshHeader <IESECRefreshHeaderViewInterface>

@property (retain, nonatomic) UIView *idleView;
@property (retain, nonatomic) UIView *refreshView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL animationOptimize;
@property (nonatomic) BOOL needRefreshOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerWithRefreshingBlock:(id /* block */)a0;
+ (unsigned long long)loadingType;
+ (void)setLoadingType:(unsigned long long)a0;
+ (id)headerWithRefreshingBlock:(id /* block */)a0 type:(unsigned long long)a1;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)setupAniOptimize;
- (void)checkAnimation;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;

@end
