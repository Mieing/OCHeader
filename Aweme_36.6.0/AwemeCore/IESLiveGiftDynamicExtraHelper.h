@class IESLiveThreadSafeDictionary, IESLiveGiftExtraDynamicConfig, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveGiftDynamicExtraHelper : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *dynamicExtraInfosDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) IESLiveGiftExtraDynamicConfig *dynamicConfig;

- (id)getRegisterMessageLatchAdaptor;
- (void)removeAllDynamicExtra;
- (id)parseDynamicExtra:(id)a0;
- (id)fixDynamicExtra:(id)a0 extra:(id)a1;
- (void)updateWithMessageType:(id)a0 definition:(id)a1;
- (void)removeDynamicExtraForKey:(id)a0;
- (id)dynamicExtraForKey:(id)a0;
- (id)dynamicExtraSyncForKey:(id)a0 extra:(id)a1 messageType:(id)a2 definition:(id)a3;
- (void)dynamicExtraForKey:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
