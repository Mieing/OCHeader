@class NSString, NSMutableSet;

@interface IESIMRegisterMsgIDForLynxContainerComponent : AWEIMComponentBase <IESIMRegisterMsgIDForLynxContainerService>

@property (retain, nonatomic) NSMutableSet *lynxContainerMessageIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)registerMessageIDForLynxContainer:(id)a0;
- (void)p_cleanLynxContainerIfNeeded;
- (void).cxx_destruct;

@end
