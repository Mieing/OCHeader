@class NSArray, NSString;

@interface AWEDTOAIMemoryMusicFadeInOut : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *start;
@property (copy, nonatomic) NSArray *end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)startJSONTransformer;

- (void).cxx_destruct;

@end
