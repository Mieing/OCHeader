@class NSMutableArray;

@interface WePkgCheckUpdateMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *_arrCheckingPkgIds;
}

- (id)init;
- (BOOL)checkUpdateForPkgId:(id)a0 Scene:(int)a1;
- (BOOL)checkUpdateForPkgIds:(id)a0 Scene:(int)a1;
- (BOOL)internalCheckUpdateForPkgIds:(id)a0 Scene:(int)a1;
- (BOOL)sendReq:(id)a0 Scene:(int)a1;
- (void)handleRespCGIWarp:(id)a0;
- (BOOL)isPkgItemValid:(id)a0;
- (void)handleRspForPkgItem:(id)a0;
- (BOOL)isSameAsLastOne:(id)a0 RegularRespMd5:(id)a1 PkgId:(id)a2;
- (void)handleSuccessResp:(id)a0 PkgItem:(id)a1 regConfig:(id)a2 ResonpseMd5:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)removeFromCheckingArrIn:(id)a0;
- (void)removeFromCheckingArr:(id)a0;
- (void)updateGlobalPkgId2Version:(id)a0 PkgItem:(id)a1;
- (void)copyPkgResponseToTmpConfig:(id)a0 OldVersion:(id)a1 ResonpseMd5:(id)a2;
- (void)copyAtomicPart:(id)a0 OldVersion:(id)a1 ResonpseMd5:(id)a2;
- (void)copyAtomicSingleFileListToUpdateConfig:(id)a0 UpdateConfig:(id)a1;
- (void)copyNonAtomicPart:(id)a0 OldVersion:(id)a1 ResonpseMd5:(id)a2;
- (void)callFailExtForPkgIds:(id)a0 errCode:(int)a1;
- (void)callSuccessExtForPkgId:(id)a0;
- (void)callFailExtForPkgId:(id)a0 errCode:(int)a1;
- (void).cxx_destruct;

@end
