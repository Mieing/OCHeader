@class NSArray, NSString;

@interface AFDLocalDataCenterResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *messageModels;
@property (copy, nonatomic) NSString *syncParams;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *reportTable;
@property (copy, nonatomic) NSString *currentUserID;

+ (id)messageModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
