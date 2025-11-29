@class NSArray;

@interface BDXBridgeImRequestContactListMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *contactList;

+ (id)contactListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
