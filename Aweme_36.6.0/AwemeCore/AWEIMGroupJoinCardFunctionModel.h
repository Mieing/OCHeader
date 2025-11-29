@class NSString, UIColor, NSArray;

@interface AWEIMGroupJoinCardFunctionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconLight;
@property (copy, nonatomic) NSString *iconDark;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *groupTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
