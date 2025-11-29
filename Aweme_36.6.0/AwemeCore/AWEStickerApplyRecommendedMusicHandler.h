@class NSString, NSNumber;

@interface AWEStickerApplyRecommendedMusicHandler : AWEStickerApplyBaseHandler

@property (copy, nonatomic) NSString *currentRequestEffectIdentifier;
@property (retain, nonatomic) NSNumber *bindMusicStartLoadTime;
@property (nonatomic) BOOL hitCache;

- (void)componentDidAppear;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)trackPropWeakBindMusicLoadFinished;
- (void).cxx_destruct;

@end
