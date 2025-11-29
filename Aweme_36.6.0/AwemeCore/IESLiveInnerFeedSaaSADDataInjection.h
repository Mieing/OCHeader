@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSNumber, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedSaaSADDataInjection : NSObject <IESLiveSlideADDataProvider, IESLiveInnerFeedDataProviderInjectionProtocol>

@property (retain, nonatomic) NSMutableSet *hybridADRoomIDs;
@property (retain, nonatomic) NSMutableDictionary *hybridADExtraStrings;
@property (retain, nonatomic) NSMutableSet *adRoomIDs;
@property (retain, nonatomic) NSMutableDictionary *adExtraStrings;
@property (retain, nonatomic) NSNumber *adOffset;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (BOOL)isADRoomWithRoomID:(id)a0;
- (id)adExtraStringWithRoomID:(id)a0;
- (BOOL)isHybridADRoomWithRoomID:(id)a0;
- (id)hybridADExtraStringWithRoomID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
