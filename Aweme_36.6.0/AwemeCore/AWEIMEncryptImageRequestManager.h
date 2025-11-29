@class NSString;

@interface AWEIMEncryptImageRequestManager : NSObject <IESIMEncryptImageRequestInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)requestImageWithContext:(id)a0;
- (id)p_errorWithCode:(int)a0 message:(id)a1;
- (id)p_requestImageWithContext:(id)a0 canRefreshUrl:(BOOL)a1;
- (BOOL)p_canErrorCauseRefreshUrl:(id)a0;
- (id)p_contextWithRefreshedUrl:(id)a0;
- (long long)p_optionsFromPriorityNumber:(int)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
