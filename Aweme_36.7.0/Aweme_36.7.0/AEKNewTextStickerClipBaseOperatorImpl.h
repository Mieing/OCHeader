@class NLESegmentNewTextTemplate_OC, NSString, NLEStyBasicAttributes_OC, NLETrackSlot_OC;
@protocol AEKNewTextStickerClipBaseData;

@interface AEKNewTextStickerClipBaseOperatorImpl : AEKBaseRenderEditor <AEKNewTextStickerClipBaseData, AEKNewTextStickerClipBaseOperator>

@property (retain, nonatomic) NLETrackSlot_OC *baseSlot;
@property (retain, nonatomic) NLESegmentNewTextTemplate_OC *baseSegment;
@property (retain, nonatomic) NLEStyBasicAttributes_OC *baseClip;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *widgetName;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerClipBaseData> data;

@end
