@class NSString;

@interface WaveVideoModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)copyNSStringToCharArray:(id)a0 toBuf:(char *)a1 bufSize:(int)a2;
+ (int)setModelPathWithName:(int)a0 modelPath:(id)a1;
+ (int)setResFileMd5:(int)a0 md5:(id)a1;
+ (int)setExptSwitch:(int)a0 value:(int)a1;
+ (int)getModelSubType:(id)a0;
+ (id)getModelSavePath:(int)a0;
+ (id)modelRoot;
+ (id)prepare:(int)a0 exptSwitch:(int)a1;
+ (id)prepareModel:(int)a0;
+ (void)prepareConfig:(int)a0 exptSwitch:(int)a1;
+ (id)getOriginalMd5:(int)a0;
+ (id)getPartialMd5:(int)a0;
+ (id)getKvStatString:(int)a0 exptSwitch:(int)a1;
+ (BOOL)saveModelToModelRoot:(id)a0 subtype:(int)a1;
+ (void)updateSubtype:(int)a0;
+ (void)checkResUpdateCheckAndUpdateSubType:(int)a0;
+ (id)getModelSavePathWithOccasionalCheckResUpdate:(int)a0;
+ (void)updateSubTypeWithOccasionalCheckResUpdate:(int)a0;
+ (void)checkResUpdateCheckAndUpdateAll;
+ (int)getBusinessExptSwitch:(id)a0;
+ (id)getBusinessKvStatString:(id)a0;
+ (void)prepareBusiness:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;

@end
