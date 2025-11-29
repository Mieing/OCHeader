@class NSString;
@protocol YataInstanceInterface, YataRenderObjectInterface;

@interface IESECCartFilterInterceptor : NSObject <YataInterceptorInterface>

@property (weak, nonatomic) id<YataInstanceInterface> yata;
@property (copy, nonatomic) NSString *anchorCartID;
@property (weak, nonatomic) id<YataRenderObjectInterface> anchorObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithYataInstance:(id)a0;
- (void)executeWithRenderObject:(id)a0;
- (void).cxx_destruct;

@end
