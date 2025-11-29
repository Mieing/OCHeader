@class NSString;

@interface AWELiveShelfBackgroundConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *startColor;
@property (nonatomic) long long startHeight;
@property (copy, nonatomic) NSString *endColor;
@property (nonatomic) long long gradientHeight;
@property (copy, nonatomic) NSString *positionColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
