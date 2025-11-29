@class NSString, NSArray;

@interface AWEIMCompanyMenuItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *menuKey;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *subMenuList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subMenuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
