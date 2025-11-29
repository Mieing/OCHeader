@class NSString, NSDictionary, AWEDTOTextOnImgAsset;

@interface AWEDTOFragmentPropInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recId;
@property (copy, nonatomic) NSString *gradeKey;
@property (nonatomic) long long propTabOrder;
@property (nonatomic) long long propImprPosition;
@property (copy, nonatomic) NSString *propSource;
@property (nonatomic) BOOL isAutoUseProp;
@property (copy, nonatomic) NSString *searchParams;
@property (copy, nonatomic) NSString *propProvider;
@property (copy, nonatomic) NSString *propZipSize;
@property (copy, nonatomic) NSString *propType;
@property (copy, nonatomic) NSString *effectUgcPath;
@property (copy, nonatomic) NSDictionary *metricsDict;
@property (retain, nonatomic) AWEDTOTextOnImgAsset *textOnImageAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textOnImageAssetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
