@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWEImageAdDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imageAdType;
@property (nonatomic) long long isHideNativeCard;
@property (copy, nonatomic) NSNumber *nativeCardShowPosition;
@property (copy, nonatomic) NSNumber *showButtonPosition;
@property (copy, nonatomic) NSNumber *changeColorPosition;
@property (copy, nonatomic) NSDictionary *productDataMap;
@property (nonatomic) double scalingRatio;
@property (copy, nonatomic) NSArray *progressBarArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productDataMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
