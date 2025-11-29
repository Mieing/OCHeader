@class NSArray, IESECURLModel, NSString;

@interface IESECMatchPurchaseHeadModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *coverImage;
@property (retain, nonatomic) NSArray *anchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
