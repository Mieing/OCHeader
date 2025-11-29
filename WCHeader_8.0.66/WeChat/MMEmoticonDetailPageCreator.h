@class NSString;

@interface MMEmoticonDetailPageCreator : NSObject <MMEmoticonLiteAppCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isForceOriginFor:(id)a0;
- (id)getQueryStringFor:(id)a0;
- (id)appid;
- (id)page;
- (BOOL)isLiteAppEnabledFor:(id)a0;
- (void)onGetLiteAppViewController:(id)a0 context:(id)a1;
- (void)onStartTryGetLiteAppViewControllerForContext:(id)a0;
- (void)onGetLiteAppViewControllerFailedForContext:(id)a0;
- (BOOL)allowsFallBackNative;
- (id)getNativeVCFor:(id)a0;

@end
