@class NSString;

@interface AWEDTOTextOnImagePropModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prepareEffectId;
@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *textStickerJsonString;
@property (nonatomic) BOOL addedForRecord;
@property (copy, nonatomic) NSString *effectSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
