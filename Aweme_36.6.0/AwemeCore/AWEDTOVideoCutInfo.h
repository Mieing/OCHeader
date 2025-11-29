@class NSString;

@interface AWEDTOVideoCutInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic) double speed;
@property (nonatomic) long long rotate;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) AWEDTOVideoCutInfo *aiClipRange;
@property (retain, nonatomic) AWEDTOVideoCutInfo *userClipRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aiClipRangeJSONTransformer;
+ (id)userClipRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
