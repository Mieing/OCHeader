@class NSString;

@interface AlibcTradeMiniAppLink : NSObject <AlibcTradeMiniAppLinkService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openUrl:(id)a0 params:(id)a1 jumpSuccess:(id /* block */)a2 jumpFailed:(id /* block */)a3;

@end
