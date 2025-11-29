@class NSArray, NSDictionary, NSString;

@interface AWEActivityDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *normalPendantData;
@property (retain, nonatomic) NSArray *taskPendantData;
@property (retain, nonatomic) NSArray *redPackgePendantData;
@property (retain, nonatomic) NSDictionary *bubbleData;
@property (retain, nonatomic) NSArray *pendantPriority;
@property (retain, nonatomic) NSString *currentActivityStage;
@property (retain, nonatomic) NSArray *popupTimeList;
@property (nonatomic) BOOL hidePendantAllTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalPendantDataJSONTransformer;
+ (id)taskPendantDataJSONTransformer;
+ (id)redPackgePendantDataJSONTransformer;
+ (id)popupTimeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithNormalPendantData:(id)a0 taskPendantData:(id)a1 redPackgePendantData:(id)a2;
- (void).cxx_destruct;

@end
