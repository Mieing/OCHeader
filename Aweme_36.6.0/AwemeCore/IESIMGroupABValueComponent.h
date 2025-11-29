@class NSDictionary;

@interface IESIMGroupABValueComponent : AWEIMComponentBase <IESIMGroupABValueInterface, AWEIMConversationInfoOtherSubscriberProtocol> {
    void /* function */ stableAbValues;
    void /* unknown type, empty encoding */ $__lazy_storage_$_storage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentUid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentCid;
    void /* unknown type, empty encoding */ cachedString;
}

@property (nonatomic, copy) NSDictionary *stableAbValues;
@property (nonatomic, retain) id unstableAbValues;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)boolValueForKey:(id)a0 stable:(BOOL)a1 defaultValue:(BOOL)a2;
- (long long)integerValueForKey:(id)a0 stable:(BOOL)a1 defaultValue:(long long)a2;
- (id)stringValueForKey:(id)a0 stable:(BOOL)a1 defaultValue:(id)a2;
- (id)objectForKey:(id)a0 stable:(BOOL)a1 defaultValue:(id)a2;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
