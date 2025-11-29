@class NSMutableArray;

@interface AWEDanmakuGuideShowModule : AWEDanmakuBaseModule

@property (nonatomic) BOOL hasShowShieldOfficialDanmaku;
@property (retain, nonatomic) NSMutableArray *guideDanmakuIDs;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)hasShowReplyDanmakuGuideFromCache;

- (id)aAWEPadModuleAdapter;
- (void)didDisplayDanmaku:(id)a0;
- (id)aAWEPlayInteractionAdapter;
- (void)onVideoPlayer:(id)a0 updatePlayTime:(double)a1 completionBlock:(id /* block */)a2;
- (void)initializeModule;
- (BOOL)canShowReplyDanmaku;
- (void)showReplyGuideDanmaku;
- (BOOL)canShowShieldOfficialDanmaku;
- (void)showShieldGuideDanmakuWithPlayTime:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;

@end
