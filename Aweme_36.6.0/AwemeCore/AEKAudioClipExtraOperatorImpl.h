@class NSString, NLETrackSlot_OC;
@protocol AEKAudioClipExtraData;

@interface AEKAudioClipExtraOperatorImpl : AEKBaseRenderEditor <AEKAudioClipExtraData, AEKAudioClipExtraOperator>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (readonly, copy, nonatomic) NSString *origVolume;
@property (readonly, nonatomic) BOOL hasTrimEnd;
@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, copy, nonatomic) NSString *templateSpeakerName;
@property (readonly, copy, nonatomic) NSString *templateTTSBindingId;
@property (readonly, copy, nonatomic) NSString *templateOriginalSlotId;
@property (readonly, nonatomic) double templateSpeedRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKAudioClipExtraData> data;

- (id)setCategoryKey:(id)a0;
- (id)setOrigVolume:(id)a0;
- (id)setHasTrimEnd:(BOOL)a0;
- (id)initWithSlot:(id)a0 BaseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (void).cxx_destruct;

@end
