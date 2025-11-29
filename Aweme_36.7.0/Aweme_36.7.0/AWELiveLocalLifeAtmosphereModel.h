@class NSNumber, NSString, AWELiveLocalLifeAtmosphereIcon;

@interface AWELiveLocalLifeAtmosphereModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long atmosphereType;
@property (copy, nonatomic) NSNumber *atmosphereNum;
@property (copy, nonatomic) NSString *atmosphereText;
@property (retain, nonatomic) AWELiveLocalLifeAtmosphereIcon *atmosphereIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
