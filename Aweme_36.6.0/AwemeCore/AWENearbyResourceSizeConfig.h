@class NSString;

@interface AWENearbyResourceSizeConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long sizeType;
@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
