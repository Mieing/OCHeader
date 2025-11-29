@class NSString, IESECShopInnerFlowNaData, NSDictionary;

@interface IESECShopInnerFlowCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) IESECShopInnerFlowNaData *NaData;
@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxData;
@property (copy, nonatomic) NSString *sliceData;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
