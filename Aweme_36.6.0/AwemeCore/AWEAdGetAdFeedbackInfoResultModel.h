@class NSNumber, NSString;

@interface AWEAdGetAdFeedbackInfoResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *dislikeSource;
@property (copy, nonatomic) NSString *dislikeExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *feedbackType;
@property (retain, nonatomic) NSNumber *interactType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *dislikeAdType;
@property (copy, nonatomic) NSString *tag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
