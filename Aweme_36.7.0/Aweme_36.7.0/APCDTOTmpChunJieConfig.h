@class NSString, NSDictionary;

@interface APCDTOTmpChunJieConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSDictionary *exchangeRedPacket;
@property (nonatomic) BOOL disableResourceAdd;
@property (nonatomic) BOOL disableResourceRemove;
@property (nonatomic) BOOL disableToastAfterPublish;
@property (copy, nonatomic) NSString *originalEffectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
