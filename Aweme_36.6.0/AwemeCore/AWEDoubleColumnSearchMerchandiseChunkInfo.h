@class NSString, NSDictionary;

@interface AWEDoubleColumnSearchMerchandiseChunkInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *chunkName;
@property (nonatomic) long long timeCost;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
