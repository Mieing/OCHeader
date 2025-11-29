@class NSString, AWEDTOCaptionModel, NSArray;

@interface AWEDTOEffectCaptionPropModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prepareEffectId;
@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) double bgmTime;
@property (nonatomic) BOOL addedForRecord;
@property (retain, nonatomic) AWEDTOCaptionModel *captionInfo;
@property (copy, nonatomic) NSArray *effectCaptions;
@property (copy, nonatomic) NSString *orignalCaptionInfo;
@property (nonatomic) BOOL createdByServer;
@property (copy, nonatomic) NSArray *recordCaptionEffectIds;
@property (nonatomic) long long scene;
@property (nonatomic) double videoTotalDuration;
@property (nonatomic) long long musicRepeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionInfoJSONTransformer;
+ (id)effectCaptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
