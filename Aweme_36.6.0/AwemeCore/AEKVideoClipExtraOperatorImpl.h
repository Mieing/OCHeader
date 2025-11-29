@class NSString, NLETrackSlot_OC;
@protocol AEKVideoClipExtraData;

@interface AEKVideoClipExtraOperatorImpl : AEKBaseRenderEditor <AEKVideoClipExtraData, AEKVideoClipExtraOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, copy, nonatomic) NSString *originTransformJSON;
@property (readonly, copy, nonatomic) NSString *splitRefName;
@property (readonly, copy, nonatomic) NSString *origVolume;
@property (readonly, copy, nonatomic) NSString *origVolumeEnable;
@property (readonly, copy, nonatomic) NSString *recommendMaterialId;
@property (readonly, copy, nonatomic) NSString *avatarSlotInfo;
@property (readonly, copy, nonatomic) NSString *textOnImageBindingId;
@property (readonly, nonatomic) long long cropRatioType;
@property (readonly, nonatomic) double cropRatioValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKVideoClipExtraData> data;

- (id)setRecommendMaterialId:(id)a0;
- (id)setTextOnImageBindingId:(id)a0;
- (id)setOriginTransformJSON:(id)a0;
- (id)setOrigVolume:(id)a0;
- (id)initWithSlot:(id)a0 BaseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (id)setSplitRefName:(id)a0;
- (id)setOrigVolumeEnable:(id)a0;
- (id)setAvatarSlotInfo:(id)a0;
- (id)setCropRatioType:(long long)a0;
- (id)setCropRatioValue:(double)a0;
- (void).cxx_destruct;

@end
