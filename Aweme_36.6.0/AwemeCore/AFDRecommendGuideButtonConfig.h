@class NSNumber, NSArray, NSString;

@interface AFDRecommendGuideButtonConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long style;
@property (nonatomic) double delayShowTime;
@property (retain, nonatomic) NSNumber *quitDaysY;
@property (retain, nonatomic) NSNumber *quitTimesN;
@property (retain, nonatomic) NSArray *allowSceneList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
