@class NSString;

@interface CJPayBizDeskPluginHybridImpl : NSObject <CJPayBizDeskPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (id)deskVCBizParams:(id)a0 bizurl:(id)a1 response:(id)a2 completionBlock:(id /* block */)a3;
- (id)deskVCBizParams:(id)a0 bizurl:(id)a1 response:(id)a2 downgradeDeskVCBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (id)p_buildUnifyPayVCWithBizParams:(id)a0 response:(id)a1 completionBlock:(id /* block */)a2;

@end
