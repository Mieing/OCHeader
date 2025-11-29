@class NSString;

@interface WCFinderTemplateResourcePreloader : NSObject <WAAppTaskMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)a0;

@end
