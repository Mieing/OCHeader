@interface IESECShopMonitorAsyncRenderItem : NSObject

@property (nonatomic) double t_render_start;
@property (nonatomic) double t_render_finish;
@property (nonatomic) unsigned long long renderStatus;
@property (copy, nonatomic) id /* block */ completion;

- (void)addRenderCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
