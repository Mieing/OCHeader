@interface tt_cnpa_ios.TtCnpaManager : NSObject {
    void /* unknown type, empty encoding */ pointer;
}

- (id)writeManifestWithInputPath:(id)a0 outputPath:(id)a1 label:(id)a2 pId:(id)a3 writeAsProducer:(BOOL)a4 overwriteExist:(BOOL)a5 needSign:(BOOL)a6;
- (id)writeManifestManuallyWithInputPath:(id)a0 outputPath:(id)a1 manifest:(id)a2;
- (id)readManifestWithFilePath:(id)a0 needVerify:(BOOL)a1;
- (id)readManifestFromBytesWithBytes:(id)a0 needVerify:(BOOL)a1;
- (id)readManifestFromBytesWithExtWithBytes:(id)a0 ext:(id)a1 needVerify:(BOOL)a2;
- (id)readExifManifestFromFileWithFilePath:(id)a0;
- (id)readExifManifestFromBytesWithBytes:(id)a0;
- (id)init;
- (id)initManager;
- (void)dealloc;

@end
