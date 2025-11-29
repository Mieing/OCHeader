@class NSString;

@interface AWEClientAIDynamicModelKeyPathGetter : NSObject <AWEClientAIDynamicModelKeyPathGetter> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getValueFromModel:(id)a0 withJSONKeyPath:(id)a1;
+ (id)getValueFromObject:(id)a0 withJSONKey:(id)a1;
+ (id)getValueFromAWERootModel:(id)a0 withJSONKey:(id)a1;
+ (id)getValueFromMTLObject:(id)a0 withJSONKey:(id)a1;
+ (id)getPropertyKeyWithJSONKey:(id)a0 JSONKeyPathsByPropertyKeyProvider:(id)a1 JSONKeyPathsByPropertyKeyGetter:(id /* block */)a2;
+ (id)getValueFromObject:(id)a0 withPropertyKey:(id)a1;
+ (id)sharedInstance;

- (id)getJSONValueFromModel:(id)a0 withJSONKeyPath:(id)a1 useCache:(BOOL)a2;
- (id)getJSONValueFromModel:(id)a0 withJSONKeyPath:(id)a1;
- (id)init;

@end
