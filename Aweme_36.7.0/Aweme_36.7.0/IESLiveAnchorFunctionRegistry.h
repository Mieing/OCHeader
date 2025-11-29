@class NSString, NSMutableDictionary;

@interface IESLiveAnchorFunctionRegistry : NSObject <IESLiveAnchorFunctionRegistryInterface>

@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerHandler:(id)a0 forInteractID:(unsigned long long)a1;
- (void)registerHandler:(id)a0 forInteractIDs:(id)a1;
- (id)handlerWithInteractID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setup;

@end
