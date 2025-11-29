@class NSString, NLEChangeListener, NSHashTable;

@interface NLENode_OC : NSObject <NLEChangeListenerDelegate> {
    struct shared_ptr<cut::model::NLENode> { struct NLENode *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (copy, nonatomic) NSString *dmt;
@property (readonly, copy, nonatomic) NSString *dve_nodeId;
@property (retain, nonatomic) NSHashTable *listenerArray;
@property (retain, nonatomic) NLEChangeListener *changeListener;
@property (nonatomic) BOOL hadAddCPPListener;
@property (nonatomic) struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromNode:(id)a0;

- (void)setExtra:(id)a0 forKey:(id)a1;
- (id)deepClone;
- (id)deepClone:(BOOL)a0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; })a0;
- (void)setTransientExtra:(id)a0 forKey:(id)a1;
- (void)removeExtraForKey:(id)a0;
- (BOOL)isWorkingDirty;
- (id)getExtraKeys;
- (void)clearExtra;
- (void)clearExtraRecursively:(id)a0;
- (void)clearUnnecessaryExtraRecursively:(id)a0;
- (BOOL)hasExtraForKey:(id)a0;
- (id)getTransientExtraForKey:(id)a0;
- (BOOL)unorderEquals:(id)a0 compareExtra:(BOOL)a1;
- (BOOL)unorderEquals:(id)a0 compareExtra:(BOOL)a1 ignoreList:(id)a2;
- (id)deepCloneWithUUID:(id)a0;
- (id)nodeClassName;
- (int)getPropertyInt:(id)a0;
- (BOOL)setPropertyInt:(id)a0 value:(int)a1;
- (unsigned int)getPropertyUInt:(id)a0;
- (BOOL)setPropertyUInt:(id)a0 value:(unsigned int)a1;
- (BOOL)getPropertyBool:(id)a0;
- (BOOL)setPropertyBool:(id)a0 value:(BOOL)a1;
- (long long)getPropertyLong:(id)a0;
- (BOOL)setPropertyLong:(id)a0 value:(long long)a1;
- (double)getPropertyDouble:(id)a0;
- (BOOL)setPropertyDouble:(id)a0 value:(double)a1;
- (float)getPropertyFloat:(id)a0;
- (BOOL)setPropertyFloat:(id)a0 value:(float)a1;
- (id)getPropertyStr:(id)a0;
- (BOOL)setPropertyStr:(id)a0 value:(id)a1;
- (id)getPropertyIntArr:(id)a0;
- (BOOL)setPropertyIntArr:(id)a0 value:(id)a1;
- (id)getPropertyFloatArr:(id)a0;
- (BOOL)setPropertyFloatArr:(id)a0 value:(id)a1;
- (id)getPropertyDoubleArr:(id)a0;
- (BOOL)setPropertyDoubleArr:(id)a0 value:(id)a1;
- (id)getPropertyStrArr:(id)a0;
- (BOOL)setPropertyStrArr:(id)a0 value:(id)a1;
- (int)getPropertyEnum:(id)a0;
- (BOOL)setPropertyEnum:(id)a0 value:(int)a1;
- (id)getExtraForKey:(id)a0;
- (id)getValueFromDouyinExtraWithKey:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getID;
- (BOOL)hasProperty:(id)a0;
- (void)addListener:(id)a0;
- (id).cxx_construct;
- (id)getName;
- (void)didChange;
- (id)getUUID;
- (BOOL)equals:(id)a0;

@end
