@class NSString;

@interface AWEDTOAIMemoryMusicKeyframe : MTLModel <MTLJSONSerializing>

@property (nonatomic) double time;
@property (nonatomic) double volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
