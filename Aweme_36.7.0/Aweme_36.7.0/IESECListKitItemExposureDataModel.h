@class NSString, NSDictionary, NSArray;

@interface IESECListKitItemExposureDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSArray *paramsFromClient;
@property (copy, nonatomic) NSString *bstRuleKey;
@property (copy, nonatomic) NSString *paramsSameAs;
@property (nonatomic) BOOL shouldMergeRealCommon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsFromClientJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
