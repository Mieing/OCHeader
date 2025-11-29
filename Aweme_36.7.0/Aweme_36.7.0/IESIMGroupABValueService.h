@interface IESIMGroupABValueService : HTSService <IESIMGroupABValueService> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_storage;
    void /* unknown type, empty encoding */ abCache;
    void /* unknown type, empty encoding */ abCacheEnable;
}

- (id)groupABValuesForConversationId:(id)a0;
- (void)refreshGroupABValue:(id)a0 forConversationID:(id)a1;
- (id)stringValueForConversationId:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (id)objectForConversationId:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (BOOL)boolValueForConversationId:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;
- (long long)integerValueForConversationId:(id)a0 key:(id)a1 defaultValue:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
