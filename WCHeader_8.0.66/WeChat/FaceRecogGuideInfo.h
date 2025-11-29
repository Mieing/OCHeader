@class NSString;

@interface FaceRecogGuideInfo : MMObject

@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *firstStepNumberIconName;
@property (copy, nonatomic) NSString *firstStepContent;
@property (copy, nonatomic) NSString *firstStepIconName;
@property (copy, nonatomic) NSString *secondStepNumberIconName;
@property (copy, nonatomic) NSString *secondStepContent;
@property (copy, nonatomic) NSString *secondStepIconName;

+ (id)genDefaultInfo;

- (void).cxx_destruct;

@end
