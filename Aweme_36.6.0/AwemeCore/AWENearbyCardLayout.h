@class NSString;

@interface AWENearbyCardLayout : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
