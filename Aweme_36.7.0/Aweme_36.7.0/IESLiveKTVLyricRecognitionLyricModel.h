@class IESLiveGCDTimer, IESLiveKTVLyricRecognitionResultModel, IESLiveKTVResourceManager;

@interface IESLiveKTVLyricRecognitionLyricModel : NSObject

@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) IESLiveKTVLyricRecognitionResultModel *model;
@property (nonatomic) double startTS;
@property (nonatomic) double currentTime;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ stopBlock;

- (void)closeTimer;
- (void)updateWithModel:(id)a0 completion:(id /* block */)a1;
- (void)initTimer;
- (void)updateSEITime:(double)a0;
- (void)closeLyric;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
