@class NSString, NSNumber;

@interface AnnieExposeAccurateExperimentParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL exposure;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) NSNumber *valueType;
@property (nonatomic) BOOL isSticky;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
