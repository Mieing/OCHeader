@class IESLiveGameInfoContextImpl, NSString, NSMutableDictionary, IESLiveGameMonitoringContextImpl, IESLiveGameTrackingContextImpl, IESLiveGameContextNode;

@interface IESLiveGameContextImpl : NSObject <IESLiveGameOpenPlatformContext, IESLiveGameOpenPlatformInstanceContext, IESLiveGameContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveGameContextNode *node;
@property (weak, nonatomic) IESLiveGameContextImpl *parentContext;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *childContextMap;
@property (retain, nonatomic) IESLiveGameTrackingContextImpl *trackingContextImpl;
@property (retain, nonatomic) IESLiveGameMonitoringContextImpl *monitoringContextImpl;
@property (retain, nonatomic) IESLiveGameInfoContextImpl *gameInfoContextImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)paramsDictionary;
- (void)addParams:(id)a0;
- (void)removeParams:(id)a0;
- (id)trackingContext;
- (void)clearAllParams;
- (id)gameInfoContext;
- (id)childContextWithUniqueIdentifier:(id)a0;
- (void)removeChildContextWithUniqueIdentifier:(id)a0;
- (void)removeAllChildrenContext;
- (id)p_createChildContextWithUniqueIdentifier:(id)a0;
- (id)initWithEventContext:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)addChild:(id)a0;
- (id)monitoringContext;

@end
