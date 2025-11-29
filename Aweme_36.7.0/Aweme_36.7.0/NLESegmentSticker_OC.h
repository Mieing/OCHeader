@class NSString, NSMutableDictionary, NLEStyStickerAnimation_OC;

@interface NLESegmentSticker_OC : NLESegment_OC

@property (copy, nonatomic) NSString *douyin;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSMutableDictionary *extraDict;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentSticker> { struct NLESegmentSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float alpha;
@property (copy, nonatomic) NSString *effectInfo;
@property (retain, nonatomic) NLEStyStickerAnimation_OC *stickerAnimation;
@property (nonatomic) BOOL visible;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentSticker> { struct NLESegmentSticker *x0; struct __shared_weak_count *x1; })a0;
- (void)setInfoStringList:(id)a0;
- (id)getInfoStringList;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;
- (BOOL)isVisible;

@end
