@interface AWEECInsetRefreshHeaderView : IESECRefreshHeaderView

@property (nonatomic) unsigned long long type;

+ (id)headerWithRefreshingBlock:(id /* block */)a0;
+ (unsigned long long)loadingType;
+ (void)setLoadingType:(unsigned long long)a0;
+ (id)headerWithRefreshingBlock:(id /* block */)a0 type:(unsigned long long)a1;

- (void)setState:(long long)a0;

@end
