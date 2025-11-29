@interface FeaturePlatform.LimitedCreationModel : NSObject <FPCreationModelPublicContext, FPCreationModelPrivateContext> {
    void /* unknown type, empty encoding */ writerTypes;
    void /* unknown type, empty encoding */ creationModel;
}

- (id)fp_getReaderWithProtocol:(id)a0;
- (id)fp_getRepoServiceWithAPI:(id)a0;
- (id)fp_getWriterWithClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
