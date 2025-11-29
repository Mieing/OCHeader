@class NSString, NSArray;

@interface AWECoverTextCover : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) unsigned long long gradientOrientation;
@property (copy, nonatomic) NSString *colorStart;
@property (copy, nonatomic) NSString *colorEnd;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (retain, nonatomic) NSArray *strokeConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strokeConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
