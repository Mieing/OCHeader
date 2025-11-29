@class NSString, NSArray, IESLLLiveMessageAtmosphereImageInfo, NSNumber;

@interface IESLLLiveMessageAtmosphereInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *atmosphereType;
@property (copy, nonatomic) NSNumber *atmosphereNum;
@property (copy, nonatomic) NSString *atmosphereText;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSArray *availableAb;
@property (retain, nonatomic) IESLLLiveMessageAtmosphereImageInfo *imageInfo;
@property (nonatomic) BOOL needDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
