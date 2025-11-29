@class NSString;

@interface AFDLearningInterestLabelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *labelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (nonatomic) BOOL hasChoose;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
