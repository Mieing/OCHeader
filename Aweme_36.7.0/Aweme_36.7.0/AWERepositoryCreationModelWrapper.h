@class NSString;
@protocol ACCCreationRepositoryBaseProtocol, ACCUseCaseContext;

@interface AWERepositoryCreationModelWrapper : NSObject <FPCreationModel>

@property (retain, nonatomic) id<ACCCreationRepositoryBaseProtocol, ACCUseCaseContext> repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fp_getReaderWithProtocol:(id)a0;
- (id)fp_getRepoServiceWithAPI:(id)a0;
- (id)fp_getWriterWithClass:(Class)a0;
- (id)initWithRepository:(id)a0;
- (void).cxx_destruct;

@end
