@class NSString;
@protocol YataRenderObjectInterface;

@interface IESECOrderListTabInterceptor : NSObject <YataInterceptorInterface>

@property (readonly, nonatomic) id<YataRenderObjectInterface> tabRenderNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithRenderObject:(id)a0;
- (void).cxx_destruct;

@end
