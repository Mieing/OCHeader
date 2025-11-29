@class NSString;

@interface QLocalErrorReporter : NSObject

@property (copy, nonatomic) NSString *miniProgramID;
@property (copy, nonatomic) NSString *businessKey;

- (id)initWithMiniProgramID:(id)a0 businessKey:(id)a1;
- (void)uploadErrorData:(id)a0 forFile:(id)a1 completion:(id /* block */)a2;
- (void)uploadDataPackage:(id)a0 forName:(id)a1 withToken:(id)a2 completion:(id /* block */)a3;
- (void)getTokenFor:(id)a0 callback:(id /* block */)a1;
- (void)onGetTokenFinishLoading:(id)a0 forName:(id)a1 callback:(id /* block */)a2;
- (id)appendParameterStringFor:(id)a0 fileName:(id)a1;
- (void).cxx_destruct;

@end
