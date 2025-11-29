@class RTVEffectGameModel, RxDeferred, NSString;
@protocol RTVEffectGameSession;

@interface RTVEffectGameDownloadTask : NSObject

@property (readonly, weak, nonatomic) id<RTVEffectGameSession> gameSession;
@property (retain, nonatomic) RTVEffectGameModel *gameModel;
@property (readonly, nonatomic) RxDeferred *downloadEffectdefer;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) double progress;
@property (readonly, copy, nonatomic) NSString *gameIdentifier;

+ (id)taskWithGameModel:(id)a0;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)fetchList;
- (id)initWithGameModel:(id)a0;
- (id)__effectModelWithIdentifier:(id)a0;
- (id)__downloadEffect:(id)a0;
- (void).cxx_destruct;
- (id)resume;
- (void)cancel;
- (unsigned long long)downloadStatus;

@end
