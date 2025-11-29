@class IESECEcLiveJumpByClickParamsModel, NSString, NSDictionary, IESECEcLiveJumpByClickBtmModel, IESECLiveAddCartInfo, NSNumber, IESECLiveSKUCreateInfo;

@interface IESECLiveJumpByClickModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *clickArea;
@property (retain, nonatomic) NSNumber *clickEnterFrom;
@property (copy, nonatomic) NSDictionary *action;
@property (retain, nonatomic) NSNumber *clickType;
@property (retain, nonatomic) IESECEcLiveJumpByClickBtmModel *btmModel;
@property (retain, nonatomic) IESECEcLiveJumpByClickParamsModel *params;
@property (retain, nonatomic) NSNumber *requestScene;
@property (retain, nonatomic) IESECLiveSKUCreateInfo *skuCreateInfo;
@property (retain, nonatomic) IESECLiveAddCartInfo *addCartInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
