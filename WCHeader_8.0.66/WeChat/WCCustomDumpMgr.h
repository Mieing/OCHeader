@interface WCCustomDumpMgr : NSObject

+ (id)shareInstance;
+ (BOOL)dumpTypeCanBeCustomDump:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (void)syncDump:(id)a0;
- (void)asyncDump:(id)a0;
- (void)dumpFlutter:(id)a0;
- (void)onPreconditionFailure:(id)a0;

@end
