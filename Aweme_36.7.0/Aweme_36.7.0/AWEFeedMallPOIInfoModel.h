@class AWEPOIServiceSpuEntryModel, NSString, NSDictionary, AWEPOIContentItemModel, AWEURLModel;

@interface AWEFeedMallPOIInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIContentItemModel *poiInfo;
@property (copy, nonatomic) NSString *hotDesc;
@property (nonatomic) unsigned long long hotType;
@property (retain, nonatomic) AWEURLModel *hotIconUrl;
@property (copy, nonatomic) NSString *cornerDesc;
@property (copy, nonatomic) NSString *spuDiscount;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *detailEntry;
@property (retain, nonatomic) NSDictionary *hotTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
