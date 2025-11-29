@class NSString;

@interface AWECommerceActivityTimeRange : MTLModel <MTLJSONSerializing>

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
