@class NSString, AWEPOIServiceSpuEntryModel;

@interface AWEIndirectPOIInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) unsigned long long platformSource;
@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSString *serviceRadius;
@property (copy, nonatomic) NSString *serviceDesc;
@property (copy, nonatomic) NSString *serviceSuffixTag;
@property (nonatomic) long long autoOpenMicroApp;
@property (nonatomic) long long shouldPreLoadMicroApp;
@property (copy, nonatomic) NSString *microAppURL;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *spuEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
