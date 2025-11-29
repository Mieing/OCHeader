@class NSString, APCDTOBasicConfig;

@interface APCDTONewHashtagStickerConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (copy, nonatomic) NSString *textInfo;
@property (copy, nonatomic) NSString *challengeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
