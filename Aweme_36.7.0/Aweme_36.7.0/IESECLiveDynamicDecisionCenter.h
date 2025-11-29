@class NSString, IESECLiveRoomContext, NSMutableDictionary;

@interface IESECLiveDynamicDecisionCenter : NSObject <IESECLiveDynamicDecisionService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _dynamicInfoLock;
}

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getDecisionResultwithFactor:(id)a0 completion:(id /* block */)a1;
- (id)getDecisionResultwithFactor:(id)a0;
- (void)collectDynamicInfoWithName:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoomContext:(id)a0;

@end
