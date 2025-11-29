@class NSString, NSNumber;

@interface BDXBridgeOpenPlatformGetRelativeAwemeListMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *tagId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
