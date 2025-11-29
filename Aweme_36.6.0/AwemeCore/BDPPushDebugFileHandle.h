@class BDPUniqueID;

@interface BDPPushDebugFileHandle : BDPODRXFileHandle {
    BDPUniqueID *uniqueID;
}

+ (id)handleWithBasicModel:(id)a0 delegate:(id)a1 error:(id *)a2;

- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (void)readDataWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (id)readDataWithFilePath:(id)a0 error:(id *)a1;
- (BOOL)asyncReadWithOverride:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
