@class NSString, MMKV;

@interface AWECommerceWorkflowLogHelper : HTSService <AWECommerceWorkflowLogHelper, HTSService>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)upLoadWorkflowLogWithData:(id)a0;
- (void)initializeDB;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeValueForKey:(id)a0;
- (id)allKeys;

@end
