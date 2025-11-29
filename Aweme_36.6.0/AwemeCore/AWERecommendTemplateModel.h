@class NSString, NSArray;

@interface AWERecommendTemplateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long templateID;
@property (retain, nonatomic) NSString *templateString;
@property (copy, nonatomic) NSArray *valueList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
