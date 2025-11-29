@class NSString;

@interface AWEDTOLoudnessEqualizationModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double sourceLufs;
@property (nonatomic) double sourcePeak;
@property (nonatomic) double targetLufs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
