@class NSString;

@interface AWEIMComponentInjectHandler : NSObject <IESIMTransferUtilInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (void)handleInjectIfNeedWithTargetVC:(id)a0 paramDict:(id)a1;
+ (void)injectFormatContextWithTargetVC:(id)a0 paramDict:(id)a1;

- (void)tryTransferToMessageVCWithUid:(id)a0 fromVC:(id)a1 injectBlock:(id /* block */)a2 extDict:(id)a3 requestScene:(id)a4 completion:(id /* block */)a5;

@end
