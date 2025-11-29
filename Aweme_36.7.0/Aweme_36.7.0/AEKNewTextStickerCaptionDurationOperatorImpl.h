@class NSArray, NLECaptionDuration_OC, NSString, AEKWordDurationInfoModel;
@protocol AEKNewTextStickerCaptionDurationData;

@interface AEKNewTextStickerCaptionDurationOperatorImpl : AEKBaseRenderEditor <AEKNewTextStickerCaptionDurationData, AEKNewTextStickerCaptionDurationOperator>

@property (retain, nonatomic) NLECaptionDuration_OC *captionDuration;
@property (readonly, nonatomic) NLECaptionDuration_OC *style;
@property (readonly, nonatomic) AEKWordDurationInfoModel *mainCaptionInfo;
@property (readonly, nonatomic) NSArray *words;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKNewTextStickerCaptionDurationData> data;

- (id)setMainCaptionContent:(id)a0;
- (id)setMainCaptionInfo:(id)a0;
- (id)replaceAllWords:(id)a0;
- (id)initWithCaptionDuration:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (void).cxx_destruct;

@end
