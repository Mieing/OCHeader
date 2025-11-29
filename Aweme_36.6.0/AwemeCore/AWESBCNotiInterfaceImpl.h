@class NSString;

@interface AWESBCNotiInterfaceImpl : HTSService <AWESBCNotiInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sbcRegisterService:(id)a0 forBusinessType:(id)a1;
- (void)sbcRegisterService:(id)a0 forBusinessTypes:(id)a1;
- (void)sbcRegisterService:(id)a0 forKey:(id)a1;
- (void)sbcRegisterService:(id)a0 forGroupToTypesDict:(id)a1;
- (void)sbcPullWhenColdStart;
- (void)trackInnerPushEventWithAction:(id)a0 enterFrom:(id)a1 chatType:(id)a2 pushType:(id)a3 groupID:(id)a4 payload:(id)a5 extra:(id)a6;

@end
