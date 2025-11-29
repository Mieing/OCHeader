@class NLESegmentNewTextTemplate_OC, NSString, NLETextShape_OC, NLETrackSlot_OC;
@protocol AEKNewTextStickerClipShapeData;

@interface AEKNewTextStickerClipShapeOperatorImpl : AEKNewTextStickerClipBaseOperatorImpl <AEKNewTextStickerClipShapeData, AEKNewTextStickerClipShapeOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NLESegmentNewTextTemplate_OC *segment;
@property (retain, nonatomic) NLETextShape_OC *shape;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *widgetName;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerClipShapeData> data;

- (id)initWithSlot:(id)a0 index:(unsigned long long)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;

@end
