@class NSArray, NSString;

@interface AFDLocalDataSingleCompensateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userArray;
@property (retain, nonatomic) NSArray *followArray;
@property (retain, nonatomic) NSArray *friendArray;
@property (retain, nonatomic) NSArray *closeFriendsArray;
@property (retain, nonatomic) NSArray *colorRingArray;
@property (retain, nonatomic) NSArray *familiarArray;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) NSArray *rowModels;
@property (retain, nonatomic) NSArray *memoryData;

+ (id)userArrayJSONTransformer;
+ (id)followArrayJSONTransformer;
+ (id)friendArrayJSONTransformer;
+ (id)colorRingArrayJSONTransformer;
+ (id)closeFriendsArrayJSONTransformer;
+ (id)familiarArrayJSONTransformer;
+ (id)rowModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)currentArrayWithTableName:(id)a0;
- (void).cxx_destruct;

@end
