@class NSString;

@interface CommonHybridRouterCpp : UnitRCObjcBaseProxyClass <CommonHybridRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)open:(id)a0 callback:(id /* block */)a1;
- (id)getPageInfoList;
- (id)getPageInfo:(id)a0;

@end
