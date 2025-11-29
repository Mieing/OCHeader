@class NSString, NSDictionary;

@interface AWESearchProfileSideBarItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *duxIconName;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSDictionary *clickLogEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
