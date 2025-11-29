@class NSMutableDictionary;

@interface PNSServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *instanceProtocolMap;
@property (retain, nonatomic) NSMutableDictionary *classProtocolMap;

+ (id)sharedInstance;

- (Class)getClass:(id)a0;
- (id)getInstance:(id)a0;
- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (void)_loadCompileServiceIfNeeded;
- (void)safeSetClass:(Class)a0 forKey:(id)a1;
- (void)safeSetInstance:(id)a0 forKey:(id)a1;
- (id)safeGetInstanceForKey:(id)a0;
- (Class)safeGetClassForKey:(id)a0;
- (void)_parseCompileServicePair:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (void)bindInstance:(id)a0 toProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
