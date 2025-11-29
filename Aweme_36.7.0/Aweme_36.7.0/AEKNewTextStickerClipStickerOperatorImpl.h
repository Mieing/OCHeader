@class NLEStickerClip_OC, NLESegmentNewTextTemplate_OC, NSString, NLETrackSlot_OC;
@protocol AEKNewTextStickerClipStickerData;

@interface AEKNewTextStickerClipStickerOperatorImpl : AEKNewTextStickerClipBaseOperatorImpl <AEKNewTextStickerClipStickerData, AEKNewTextStickerClipStickerOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NLESegmentNewTextTemplate_OC *segment;
@property (retain, nonatomic) NLEStickerClip_OC *stickerClip;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *widgetName;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerClipStickerData> data;

- (id)initWithSlot:(id)a0 index:(unsigned long long)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;
- (void)setResourceFilePath:(id)a0;

@end
