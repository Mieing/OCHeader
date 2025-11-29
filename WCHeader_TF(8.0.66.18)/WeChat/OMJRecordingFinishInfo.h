@class NSString, NSArray, UIImage, OMJRecordingResultTraits;

@interface OMJRecordingFinishInfo : NSObject

@property (readonly, nonatomic) NSString *outputFilePath;
@property (readonly, nonatomic) NSString *outputFileChecksum;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } recordingDuration;
@property (readonly, nonatomic) NSString *originalImageSeqDirPath;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *croppedCoverImage;
@property (retain, nonatomic) OMJRecordingResultTraits *recordingResultTraits;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } redPacketStartTime;
@property (retain, nonatomic) NSArray *aigcResultAssets;

- (id)initWithOutputFilePath:(id)a0 outputFileChecksum:(id)a1 recordingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 originalImageSeqDirPath:(id)a3;
- (id)description;
- (void).cxx_destruct;

@end
