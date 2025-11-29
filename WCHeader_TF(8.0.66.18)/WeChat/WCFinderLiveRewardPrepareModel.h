@class FinderLiveGiftAttackCtx, NSMutableDictionary, NSDictionary, NSData, FinderLivePkValueExtraCtx, FinderLiveGiftRandomCtx;

@interface WCFinderLiveRewardPrepareModel : NSObject

@property (retain, nonatomic) FinderLiveGiftRandomCtx *randomCtx;
@property (retain, nonatomic) FinderLiveGiftAttackCtx *attackCtx;
@property (retain, nonatomic) FinderLivePkValueExtraCtx *pkValueCtx;
@property (retain, nonatomic) NSMutableDictionary *mBufferMap;
@property (nonatomic) unsigned long long scene;
@property (readonly, nonatomic) NSData *prepareBuf;
@property (readonly, nonatomic) NSData *ctxBuf;
@property (retain, nonatomic) NSDictionary *bufferMap;

+ (id)CreatePrepareModelWithScene:(unsigned long long)a0 sceneFlag:(unsigned long long)a1 rewardPrepareResp:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
