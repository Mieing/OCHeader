@class NSString, NSMutableDictionary;

@interface LiteAppStore : NSObject {
    struct set<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> { struct __tree<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<unsigned long, unsigned int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::pair<unsigned long, unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _dispatchInfo;
    NSMutableDictionary *_data;
}

@property (nonatomic) unsigned int appUuid;
@property (retain, nonatomic) NSString *appId;
@property (copy, nonatomic) id /* block */ onDispatch;

+ (id)ObjToJsonString:(id)a0;
+ (id)JsonStringToObj:(id)a0;
+ (id)JSONValue:(id)a0;

- (id)init;
- (void)SendResult:(unsigned long long)a0 callbackId:(unsigned int)a1 json:(id)a2;
- (void)SendResult:(unsigned long long)a0 callbackId:(unsigned int)a1 obj:(id)a2;
- (void)SendError:(unsigned long long)a0 callbackId:(unsigned int)a1 message:(id)a2;
- (void)SetData:(id)a0;
- (BOOL)OnDispatch:(id)a0 instanceId:(unsigned long long)a1 actionName:(id)a2 data:(id)a3 callbackId:(int)a4;
- (id)OnSyncCall:(id)a0 type:(id)a1 target:(id)a2;
- (void)ForceUpdateData;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
