@interface IESMMCameraDeviceAuthor : NSObject

+ (void)cameraAuthorzied:(id /* block */)a0;
+ (BOOL)checkPlayBackAndRecordCategory;
+ (BOOL)checkPlayBackAndRecordCategoryWithCategoryOption:(unsigned long long)a0;
+ (BOOL)checkPlayBackCategory;
+ (BOOL)deactiveAudioSession;
+ (id)getPortTypeInString;
+ (BOOL)isCameraAuth;
+ (BOOL)isMicAuth;
+ (BOOL)isMicNowAvailableV2;
+ (void)microphoneAuthorzied:(id /* block */)a0;
+ (unsigned long long)reduceCategoryOption:(unsigned long long)a0;

@end
