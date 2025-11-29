@class NSString;

@interface AWEInteractSurveyOptionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *optionTitle;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *recoExtra;
@property (nonatomic) BOOL isOptionSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
