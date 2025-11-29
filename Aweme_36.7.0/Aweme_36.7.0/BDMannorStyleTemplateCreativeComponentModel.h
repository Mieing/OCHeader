@class NSString, NSDictionary, NSArray;

@interface BDMannorStyleTemplateCreativeComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) long long batManDirection;
@property (nonatomic) long long styleType;
@property (copy, nonatomic) NSString *cardURL;
@property (copy, nonatomic) NSString *consultURL;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSDictionary *compliance;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *buttonList;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSDictionary *trackURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
