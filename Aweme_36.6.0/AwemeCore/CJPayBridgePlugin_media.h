@class NSString, NSMutableDictionary;

@interface CJPayBridgePlugin_media : TTBridgePlugin <UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPickerViewControllerDelegate>

@property (copy, nonatomic) id /* block */ failUploadBlock;
@property (copy, nonatomic) id /* block */ chooseImageCompletionBlock;
@property (copy, nonatomic) id /* block */ chooseImageListCompletionBlock;
@property (copy, nonatomic) id /* block */ chooseVideoCompletionBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSMutableDictionary *md52PathMap;
@property (nonatomic) BOOL isNeedClear;
@property (nonatomic) double compressSize;
@property (nonatomic) BOOL disableChooseMultiMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)chooseMediaWithParams:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3 command:(id)a4;
- (void)uploadMediaWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)p_initBlockWithModel:(id)a0 fileModel:(id)a1 callback:(id /* block */)a2 param:(id)a3;
- (void)p_checkCameraPermissionWithController:(id)a0;
- (id)p_createUploadRequestHeader:(id)a0;
- (void)p_processImage:(id)a0 compressSize:(double)a1 completion:(id /* block */)a2;
- (void)p_reportCompressPerformance:(id)a0 duration:(double)a1 originalSizeKB:(double)a2 compressedSizeKB:(double)a3 targetSizeKB:(double)a4 compressRatio:(double)a5;
- (void)p_processVideoCompressWithUrl:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
