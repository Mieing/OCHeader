@class NSString;

@interface AWELuckyCatPendantBackgroundStroke : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (nonatomic) double alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
