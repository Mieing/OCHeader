@class NSString, NSNumber;

@interface AWEQuestionnaireExtraInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long questionnaireType;
@property (copy, nonatomic) NSString *projectID;
@property (copy, nonatomic) NSString *gaiyaProjectID;
@property (retain, nonatomic) NSNumber *parentID;
@property (retain, nonatomic) NSNumber *feedSurvey;
@property (nonatomic) BOOL shouldShowSurveyWithTimestamp;
@property (nonatomic) double showSurveyMinTimestamp;
@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *subScene;
@property (retain, nonatomic) NSNumber *sendCount;
@property (nonatomic) BOOL isBilling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
