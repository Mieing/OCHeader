@class RxScheduler, NSString;

@interface AWEIMEncryptImageUploadManager : NSObject <IESIMEncryptImageUploadInterface>

@property (readonly, nonatomic) RxScheduler *sharedScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)p_errorWithCode:(int)a0 message:(id)a1;
- (id)uploadFileWithContext:(id)a0;
- (void)p_trackUploadWithContext:(id)a0 result:(id)a1 duration:(double)a2 error:(id)a3;
- (id)p_generateTempFileForImage:(id)a0;
- (id)p_uploadImageFromLocalPath:(id)a0;
- (id)p_resultForResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
