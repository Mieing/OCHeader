@class SECRomaResolver, NSString;

@interface SECRomaManager : NSObject <IESGurdEventDelegate>

@property (nonatomic) unsigned long long curVersion;
@property (retain) SECRomaResolver *resolver;
@property (retain) SECRomaResolver *builtinResolver;
@property (nonatomic) BOOL useBuiltin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)updateConfig:(id)a0;
- (BOOL)canOpenURL:(id)a0 referType:(id)a1 silent:(BOOL)a2;
- (void)_updateConfig:(id)a0;
- (id)fallbackToBuiltinWithTracker:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
