@class NSArray, NSString;

@interface IESECWinGoodsListSearchRenderInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *renderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
