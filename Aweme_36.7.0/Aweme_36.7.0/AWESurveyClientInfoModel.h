@class NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface AWESurveyClientInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *parentID;
@property (copy, nonatomic) NSString *projectID;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *surveyID;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *taskVersion;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *questionVersion;
@property (retain, nonatomic) NSNumber *feedSurvey;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *freq;
@property (retain, nonatomic) NSNumber *freqStrategy;
@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *subScene;
@property (retain, nonatomic) NSNumber *surveyType;
@property (retain, nonatomic) NSNumber *sendCount;
@property (retain, nonatomic) NSNumber *popUpMaxThreshold;
@property (retain, nonatomic) NSNumber *popUpMinThreshold;
@property (nonatomic) BOOL shouldShowActionArea;
@property (nonatomic) long long surveyStyle;
@property (nonatomic) long long theme;
@property (copy, nonatomic) NSArray *options;
@property (retain, nonatomic) NSDate *startDate;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
