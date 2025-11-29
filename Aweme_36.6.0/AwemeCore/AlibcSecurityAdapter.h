@protocol IOpenOpenSDKComponent;

@interface AlibcSecurityAdapter : NSObject

@property (retain, nonatomic) id<IOpenOpenSDKComponent> component;

- (id)sGuardImageName;
- (id)getAppKey;
- (id)getJumpEnv:(id)a0 authCode:(id)a1 bizString:(id)a2 config:(id)a3 extend:(id)a4 error:(id *)a5;
- (void)asyncInit:(id /* block */)a0;
- (BOOL)setRS:(BOOL)a0;
- (void).cxx_destruct;

@end
