@interface AWEStudioLivePhotoCameraAction : AWEStudioCameraAction

@property (nonatomic) double postRecordingDuration;
@property (copy, nonatomic) id /* block */ takeImageBlock;
@property (copy, nonatomic) id /* block */ recordVideoFinished;

- (void).cxx_destruct;
- (id)init;

@end
