@class NSString;

@interface CJPayProtocolViewManager : NSObject <CJPayProtocolViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)createProtocolViewController:(id)a0 protocolModel:(id)a1;
+ (void)fetchProtocolListWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)defaultService;

- (void)i_showProtocolDetail:(id)a0 delegate:(id)a1;
- (void)p_showProtocolDetail:(id)a0 completionBlock:(id /* block */)a1;

@end
