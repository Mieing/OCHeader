@interface ACCVideoEditClipTask : NSObject

@property (retain, nonatomic) ACCVideoEditClipTask *task;
@property (copy, nonatomic) id /* block */ cancelBlk;
@property (nonatomic) BOOL isCancle;
@property (nonatomic) BOOL isStartAIClip;
@property (nonatomic) double startDownLoadMusic;
@property (nonatomic) double startAIClip;
@property (nonatomic) double endAIClip;

- (void)cancleTask;
- (BOOL)needResumeVideo;
- (void).cxx_destruct;

@end
