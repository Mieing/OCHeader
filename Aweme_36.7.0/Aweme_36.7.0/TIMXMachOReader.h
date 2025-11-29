@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXMachOReader : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringsForType:(id)a0;
- (id)parseValue:(const void *)a0 withType:(unsigned long long)a1;
- (BOOL)readSection:(char *)a0 inSegment:(char *)a1 withImageInfo:(struct dl_info { char *x0; void *x1; char *x2; void *x3; })a2 dataHandler:(id /* block */)a3;
- (id)functionsForType:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithRootObject:(id)a0;
- (id)functionForKey:(id)a0;
- (void)p_initialize;

@end
