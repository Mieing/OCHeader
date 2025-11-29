@class RTVFeedShareBehaviorOption, RTVVoipBehaviorOption, NSDictionary, RTVFestivalBehaviorOption, RTVGameBehaviorOption, RTVCommonBehaviorOption;

@interface RTVBehaviorOptions : JSONModel

@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) RTVCommonBehaviorOption *commonOption;
@property (retain, nonatomic) RTVFestivalBehaviorOption *festivalOption;
@property (retain, nonatomic) RTVVoipBehaviorOption *voipOption;
@property (retain, nonatomic) RTVFeedShareBehaviorOption *feedShareOption;
@property (retain, nonatomic) RTVGameBehaviorOption *gameOption;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
