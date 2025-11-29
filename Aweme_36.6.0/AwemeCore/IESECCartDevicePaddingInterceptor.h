@class NSString, IESECCartContext;

@interface IESECCartDevicePaddingInterceptor : NSObject <YataInterceptorInterface>

@property (weak, nonatomic) IESECCartContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithRenderObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
