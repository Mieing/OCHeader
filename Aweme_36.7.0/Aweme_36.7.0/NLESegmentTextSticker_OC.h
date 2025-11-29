@class NSString, NLEStyleText_OC;

@interface NLESegmentTextSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentTextSticker> { struct NLESegmentTextSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NLEStyleText_OC *style;
@property (readonly, nonatomic) BOOL newEffectProtocol;
@property (nonatomic) BOOL isRichtext;
@property (copy, nonatomic) NSString *richContent;

+ (id)textStickerWithEffectSDKJSONString:(id)a0;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentTextSticker> { struct NLESegmentTextSticker *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithNewEffectProtocol:(BOOL)a0;
- (void)setEffectSDKJSONString:(id)a0;
- (id)toEffectJSON;
- (void).cxx_destruct;
- (id)init;

@end
