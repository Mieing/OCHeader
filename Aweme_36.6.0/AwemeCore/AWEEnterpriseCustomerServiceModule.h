@class NSString, NSArray, AWEEnterpriseCustomerServiceActionModel, NSNumber;

@interface AWEEnterpriseCustomerServiceModule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSNumber *levelCnt;
@property (copy, nonatomic) NSString *props;
@property (copy, nonatomic) NSArray *descAry;
@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSArray *moduleAry;
@property (copy, nonatomic) NSArray *listValue;
@property (copy, nonatomic) AWEEnterpriseCustomerServiceActionModel *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
