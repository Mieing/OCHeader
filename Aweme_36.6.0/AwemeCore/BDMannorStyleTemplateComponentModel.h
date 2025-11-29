@class NSString, NSDictionary;
@protocol BDMannorStyleTemplateComponentDataProtocol;

@interface BDMannorStyleTemplateComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<BDMannorStyleTemplateComponentDataProtocol> dataModel;
@property (nonatomic) long long type;
@property (nonatomic) long long renderType;
@property (copy, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *styleTemplateCode;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL forbiddenLayout;
@property (nonatomic) BOOL mannorEnable;
@property (nonatomic) BOOL isMainTemplate;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *layout;
@property (copy, nonatomic) NSDictionary *meta;
@property (copy, nonatomic) NSString *atpConfig;
@property (nonatomic) long long ID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
