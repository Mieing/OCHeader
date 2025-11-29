@class NSString, NSArray;

@interface AWEIMPushGuideModelV3 : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long guideType;
@property (copy, nonatomic) NSString *topTitle;
@property (retain, nonatomic) NSArray *selections;
@property (copy, nonatomic) NSString *leftBtnTitle;
@property (copy, nonatomic) NSString *rightBtnTitle;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *ruleID;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *titleIconUrl;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *intentiveTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
