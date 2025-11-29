@class NSString;

@interface AWEPOIExtractConfigItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) double durationMin;
@property (nonatomic) double durationMax;
@property (nonatomic) long long maxFrame;
@property (nonatomic) double fps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
