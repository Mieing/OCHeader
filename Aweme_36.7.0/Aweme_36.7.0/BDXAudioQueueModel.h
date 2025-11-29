@class NSString, NSArray, BDXAudioModel;

@interface BDXAudioQueueModel : NSObject

@property (readonly, nonatomic) NSString *queueID;
@property (readonly, nonatomic) BDXAudioModel *currentPlayModel;
@property (readonly, nonatomic) NSArray *playModelArray;
@property (readonly, nonatomic) long long currentIndex;
@property (nonatomic) unsigned long long loopMode;
@property (nonatomic) BOOL isBackground;

- (BOOL)updateCurrentModel:(id)a0;
- (BOOL)canGoPrev;
- (BOOL)canGoNext;
- (void)goPrev;
- (void)goNext;
- (void)setupWithModels:(id)a0;
- (id)findModelWithStep:(long long)a0;
- (id)initWithModels:(id)a0 queueId:(id)a1;
- (void)appendAudioModels:(id)a0;
- (void).cxx_destruct;

@end
