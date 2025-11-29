@class NSString, NSArray;

@interface AWETeenModeAlertOptContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *exitText;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) NSArray *materials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
