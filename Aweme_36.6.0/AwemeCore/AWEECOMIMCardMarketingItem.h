@class NSString;

@interface AWEECOMIMCardMarketingItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *head;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *labelUrlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)tagWidth;
- (void).cxx_destruct;

@end
