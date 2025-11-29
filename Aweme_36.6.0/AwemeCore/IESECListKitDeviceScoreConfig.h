@class NSString;

@interface IESECListKitDeviceScoreConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double max;
@property (nonatomic) double min;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
