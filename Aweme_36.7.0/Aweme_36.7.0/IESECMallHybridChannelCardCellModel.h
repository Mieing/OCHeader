@class NSDictionary, NSString, NSArray;

@interface IESECMallHybridChannelCardCellModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSDictionary *hybridBFFInfos;
@property (copy, nonatomic) NSDictionary *hybridProps;
@property (copy, nonatomic) NSArray *instanceBridges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSameChannel:(id)a0 with:(id)a1;
+ (BOOL)shouldUpdate:(id)a0 with:(id)a1;
+ (BOOL)shouldUpdateProps:(id)a0 with:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isWebView;
- (void).cxx_destruct;

@end
