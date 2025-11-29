@class NSString;

@interface LLBizDitoRouterImpl : NSObject <LLDitoRouterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)transferToURLString:(id)a0;
- (void)transferToURLString:(id)a0 completion:(id /* block */)a1;

@end
