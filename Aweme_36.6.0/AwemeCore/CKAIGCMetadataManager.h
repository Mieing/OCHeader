@interface CKAIGCMetadataManager : NSObject {
    void /* unknown type, empty encoding */ processQueue;
}

@property (class, nonatomic, readonly) CKAIGCMetadataManager *shared;

+ (id)supportedFileFormatWith:(id)a0;
+ (BOOL)isJPEGWith:(id)a0;

- (void)writeMetadataWithInputPath:(id)a0 outputPath:(id)a1 label:(id)a2 pId:(id)a3 isProducer:(BOOL)a4 overwrite:(BOOL)a5 completion:(id /* block */)a6;
- (void)writeMetadataWithInputPath:(id)a0 outputPath:(id)a1 manifest:(id)a2 completion:(id /* block */)a3;
- (void)readMetadataFrom:(id)a0 completion:(id /* block */)a1;
- (void)readMetadataWithData:(id)a0 dataUTI:(id)a1 completion:(id /* block */)a2;
- (void)readExifMetadataWithData:(id)a0 dataUTI:(id)a1 completion:(id /* block */)a2;
- (void)setupWithProducer:(id)a0 propagator:(id)a1 logHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
