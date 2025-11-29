@class NSString;

@interface BDXBridgeOpenPlatformGetInnerFeedAwemeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) BOOL needAwemeModel;
@property (nonatomic) BOOL needLogParams;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *tagId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
