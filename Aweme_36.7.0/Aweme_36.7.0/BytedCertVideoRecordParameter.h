@class NSString;

@interface BytedCertVideoRecordParameter : BytedCertParameter

@property (copy, nonatomic) NSString *readText;
@property (nonatomic) long long msPerWord;
@property (nonatomic) BOOL skipFaceDetect;
@property (copy, nonatomic) NSString *faceEnvBase64;

- (double)totalReadDurationInSeconds;
- (void).cxx_destruct;
- (id)init;

@end
