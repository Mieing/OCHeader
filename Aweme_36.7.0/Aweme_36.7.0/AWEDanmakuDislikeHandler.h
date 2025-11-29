@class NSMutableDictionary;

@interface AWEDanmakuDislikeHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *dislikeDanmakus;
@property (nonatomic) long long dislikeCount;

- (void)resetDislikeCount;
- (void)addDislikeDanmakuModel:(id)a0;
- (void)removeDislikeDanmakuModel:(id)a0;
- (void)markDislikeToastShowWithModel:(id)a0;
- (BOOL)canShownDislikeToastWithModel:(id)a0;
- (BOOL)shouldShieldDanmakuModel:(id)a0;
- (BOOL)shouldFilterDislikeDanmaku;
- (void).cxx_destruct;
- (void)reset;

@end
