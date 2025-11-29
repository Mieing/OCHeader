@class NSMapTable;

@interface IESECDIAdapterManager : NSObject

@property (retain, nonatomic) NSMapTable *serviceImpHashMap;

+ (id)shared;

- (void)loadAdapterDyldStruct;
- (id)impForProtocol:(id)a0 inTarget:(id)a1;
- (id)hashMapForProtocol:(id)a0;
- (id)objectForAdapter:(id)a0 target:(id)a1;
- (id)usedTargetFor:(id)a0;
- (Class)classForAdapter:(id)a0 target:(id)a1;
- (void)registerProtocol:(id)a0 WithImp:(id)a1 forTarget:(id)a2;
- (BOOL)parseAdapterStructInMatchOWithHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (id)objectForAdapter:(id)a0;
- (Class)classForAdapter:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
