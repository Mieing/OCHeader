@class NSString, IESECGoodsSearchWordParamsModel;

@interface IESECGoodsSearchWordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordID;
@property (retain, nonatomic) IESECGoodsSearchWordParamsModel *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
