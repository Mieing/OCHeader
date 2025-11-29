@class NSString;

@interface IESIMLynxService : HTSService <IESIMLynxService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openHunterContainerParamModelView:(id)a0;
- (void)openHunterContainerParamModelView:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)handleUrl:(id)a0 extraParams:(id)a1;
- (void)lynxContextPoolRemoveContext:(id)a0;
- (void)notifyLynxIMDealloc;

@end
