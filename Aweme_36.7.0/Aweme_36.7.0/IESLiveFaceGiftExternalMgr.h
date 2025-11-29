@class NSArray, NSMapTable, NSString;

@interface IESLiveFaceGiftExternalMgr : NSObject <IESLiveFaceGiftExternalMgrProtocol>

@property (retain, nonatomic) NSMapTable *externalMap;
@property (retain, nonatomic) NSArray *externalIDRegedit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (BOOL)blockPositionExecuteWithPos:(unsigned long long)a0 externals:(id *)a1;
- (BOOL)p_prefilterWithExternal:(id)a0;
- (void)p_injectFaceGiftExternal:(id)a0;
- (void)p_cancelInjectFaceGiftExternal:(id)a0;
- (BOOL)p_enableInjectWithExternal:(id)a0;
- (BOOL)injectFaceGiftExternal:(id)a0;
- (BOOL)cancelInjectFaceGiftExternal:(id)a0;
- (void).cxx_destruct;
- (void)p_init;

@end
