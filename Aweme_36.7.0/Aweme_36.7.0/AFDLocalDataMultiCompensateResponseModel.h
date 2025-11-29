@class NSArray, NSString;

@interface AFDLocalDataMultiCompensateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *messageModels;
@property (copy, nonatomic) NSString *syncParams;
@property (copy, nonatomic) NSString *currentUserID;

+ (id)messageModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
