@class IESPortraitCenterServiceConfig, NSMutableArray;

@interface IESPortraitCenterService : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _producersLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _listenersLock;
}

@property (nonatomic) BOOL hasSetup;
@property (retain, nonatomic) IESPortraitCenterServiceConfig *serviceConfig;
@property (copy, nonatomic) NSMutableArray *producers;
@property (copy, nonatomic) NSMutableArray *listeners;

+ (id)sharedInstance;

- (id)getPortraitElement:(id)a0 withStrategy:(id)a1;
- (id)p_getPortrait:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)p_getUserPortraits;
- (id)getPortraitElementsWithStrategy:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElement:(id)a0 withStrategy:(id)a1 inTypes:(unsigned long long)a2 params:(id)a3;
- (unsigned long long)getPortraitDataType:(id)a0;
- (id)mergePortraits:(id)a0 toPortraits:(id)a1;
- (void)onPortraitChanged:(id)a0;
- (void)setupSDKIfNeeded;
- (void)setupWithConfigBlock:(id /* block */)a0;
- (id)getPortraitElementsWithStrategy:(id)a0;
- (id)getServerPortraits;
- (id)getCommonClientPortraits;
- (void)updateCommonClientPortraitWithKey:(id)a0 value:(id)a1;
- (void)updateCommonClientPortraits:(id)a0;
- (void)configCommonClientPortraitWithKey:(id)a0 config:(id)a1;
- (void)registerProducer:(id)a0;
- (void)unregisterProducer:(id)a0;
- (void)addPortraitChangeListener:(id)a0;
- (void)removePortraitChangeListener:(id)a0;
- (float)getPortraitAsFloat:(id)a0 defaultValue:(float)a1;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (void)producerNotifyPortraitChange:(id)a0;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
