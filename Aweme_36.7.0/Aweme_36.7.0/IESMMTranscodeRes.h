@class NSString, NSDictionary, NSURL, NSError, IESMMUploadParams;

@interface IESMMTranscodeRes : NSObject

@property (nonatomic) long long transType;
@property (nonatomic) long long compileLevel;
@property (nonatomic) BOOL isReendcode;
@property (nonatomic) BOOL isRecordHardEncode;
@property (nonatomic) long long encodeType;
@property (nonatomic) BOOL isCompileHardEncode;
@property (retain, nonatomic) NSURL *mergeUrl;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int frameNum;
@property (nonatomic) int subErrorCode;
@property (nonatomic) int subErrorCodeVT;
@property (nonatomic) int useEditorSession;
@property (copy, nonatomic) NSString *compileStage;
@property (nonatomic) unsigned long long notRemuxErrorcode;
@property (nonatomic) float oriDuration;
@property (nonatomic) float oriVideoDuration;
@property (nonatomic) float oriAudioDuration;
@property (nonatomic) double effectDuration;
@property (nonatomic) int encodeBitsType;
@property (nonatomic) int encodeHdrType;
@property (nonatomic) int maxVtErrCode;
@property (nonatomic) int softDecodeCount;
@property (nonatomic) BOOL LensIsRunSuccess;
@property (nonatomic) BOOL LensUseIFrame;
@property (nonatomic) float LensAvgComplexity;
@property (nonatomic) float LensMinComplexity;
@property (nonatomic) float LensMaxComplexity;
@property (nonatomic) BOOL canTranscodeInBackground;
@property (nonatomic) BOOL didTranscodeInBackground;
@property (nonatomic) double compilePauseTime;
@property (copy, nonatomic) NSDictionary *riskyVideoInfo;
@property (retain, nonatomic) IESMMUploadParams *uploadParams;

- (void).cxx_destruct;
- (id)init;

@end
