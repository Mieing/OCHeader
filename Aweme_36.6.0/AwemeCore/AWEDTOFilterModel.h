@class NSString, NSArray;

@interface AWEDTOFilterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *editFilterId;
@property (nonatomic) BOOL editedWithLightingFilter;
@property (nonatomic) double filterIntensity;
@property (nonatomic) BOOL capturedWithLightningFilter;
@property (copy, nonatomic) NSString *editFilterLabel;
@property (copy, nonatomic) NSString *editFilterName;
@property (nonatomic) BOOL enableUrs;
@property (nonatomic) BOOL filterFromSmartBeauty;
@property (copy, nonatomic) NSArray *filterIdsForDownload;
@property (copy, nonatomic) NSArray *adjustIdsForDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
