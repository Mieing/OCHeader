@class NSString, NSArray, IESLLPOIServiceSpuEntryModel;

@interface IESLLPOISpuListModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *spuList;
@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *spuEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
