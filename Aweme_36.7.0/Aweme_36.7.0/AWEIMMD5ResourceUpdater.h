@class AWEIMMD5ResourceUpdaterConfig;

@interface AWEIMMD5ResourceUpdater : NSObject

@property (nonatomic) long long status;
@property (retain, nonatomic) AWEIMMD5ResourceUpdaterConfig *config;

- (void)autoFetchWithHeaderFieldContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchResourceWithURLString:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isfileExistingAtPath:(id)a0;
- (void)fetchMd5WithHeaderFieldContext:(id)a0 completion:(id /* block */)a1;
- (void)p_removeFileAtPathIfNeeded:(id)a0;
- (BOOL)p_moveFileAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
