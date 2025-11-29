@class NSString;

@interface CJPayIAPRetainServiceImp : NSObject <CJPayIAPRetainService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (BOOL)i_showIAPRetainWithParams:(id)a0 eventBlock:(id /* block */)a1;

@end
