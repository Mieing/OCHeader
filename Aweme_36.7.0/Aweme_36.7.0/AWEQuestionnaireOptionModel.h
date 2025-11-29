@class NSNumber, NSString;

@interface AWEQuestionnaireOptionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *optionRate;
@property (copy, nonatomic) NSString *optionID;
@property (copy, nonatomic) NSString *optionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
