@class NSString, NSArray, AWEPOIServiceSpuEntryModel;

@interface AWEPOISpuListModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *spuList;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *spuEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
