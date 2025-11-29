@class NSString, NSMutableDictionary;

@interface IESECSmartServiceProvider : NSObject <IESECSmartServiceProvider> {
    NSMutableDictionary *p_serviceMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getServiceWithName:(id)a0 config:(id)a1;
+ (id)sharedInstance;

@end
