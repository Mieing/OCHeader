@class NSString;

@interface AWETextContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
