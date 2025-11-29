@class NSString;

@interface AWEOfficialDetailListViewControllerInjectionImpl : NSObject <AWEOfficialDetailListViewControllerInjection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableCommonSubscribePage;
- (void)registerReachMessageWithVC:(id)a0;
- (void)unregisterReachMessageWithVC:(id)a0;
- (void)fetchCommonSubscribeSetWithDisableStruct:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchCommonSubTypeSubscribeSetWithDisableStruct:(id)a0 completionBlock:(id /* block */)a1;

@end
