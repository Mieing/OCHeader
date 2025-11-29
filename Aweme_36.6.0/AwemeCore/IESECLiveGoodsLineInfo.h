@class NSArray, NSString;

@interface IESECLiveGoodsLineInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *infoItems;
@property (nonatomic) long long maxLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
