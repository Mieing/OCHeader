@class LVVEDataCache, LVMediaDraft, IESMMALLKeyFrames;

@interface LVAllKeyframe : NSObject

@property (weak, nonatomic) LVMediaDraft *draft;
@property (weak, nonatomic) LVVEDataCache *cache;
@property (retain, nonatomic) IESMMALLKeyFrames *allkeyFrames;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (id)initWithDraft:(id)a0 cache:(id)a1 allkeyFrame:(id)a2 pts:(unsigned long long)a3;
- (id)parseKeyframeJson:(id)a0 key:(id)a1;
- (id)videoClipInfoWithSegmentID:(id)a0;
- (id)maskConfigWithSegmentID:(id)a0;
- (id)chromaWithSegmentID:(id)a0;
- (id)videoEffectValueWithSegmentID:(id)a0 type:(unsigned long long)a1;
- (id)globalEffectValueWithSegmentID:(id)a0 type:(unsigned long long)a1;
- (id)hexColorWithRGBA:(id)a0 alpha:(double)a1;
- (id)infoStickerWithSegmentID:(id)a0;
- (id)infoStickerSizeWithSegmentID:(id)a0;
- (void).cxx_destruct;

@end
