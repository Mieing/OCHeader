@class NSString;

@interface IESECMatchPurchaseBaseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *combinationID;
@property (copy, nonatomic) NSString *recommendContent;
@property (copy, nonatomic) NSString *combinationTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
