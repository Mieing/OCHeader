@class NSString, IESECURLModel;

@interface IESECMatchPurchaseAllCombinationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *arrowIcon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
