@class NSArray, NSString;

@interface IESECLiveGoodsInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *lineInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lineInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
