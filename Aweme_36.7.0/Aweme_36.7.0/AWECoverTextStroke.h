@class NSString;

@interface AWECoverTextStroke : MTLModel <MTLJSONSerializing>

@property (nonatomic) double width;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) unsigned long long joinMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
