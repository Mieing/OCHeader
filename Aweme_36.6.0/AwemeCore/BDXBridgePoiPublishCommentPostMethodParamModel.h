@class NSString, NSNumber, NSDictionary;

@interface BDXBridgePoiPublishCommentPostMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *rateId;
@property (retain, nonatomic) NSNumber *rateGrade;
@property (copy, nonatomic) NSString *rateContent;
@property (retain, nonatomic) NSNumber *noDefaultLanding;
@property (retain, nonatomic) NSNumber *selfPageShow;
@property (retain, nonatomic) NSNumber *useOpenCreation;
@property (copy, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSNumber *tabId;
@property (copy, nonatomic) NSString *toCommentID;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
