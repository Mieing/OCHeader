@class NSNumber, AWEActionResponseModel, NSArray;

@interface AWEIMOfficialActionResponseModel : IESIMBaseApiModel

@property (copy, nonatomic) NSNumber *noticeID;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) AWEActionResponseModel *actionResponse;
@property (nonatomic) BOOL awemeItemDisable;
@property (nonatomic) BOOL noticeDisable;
@property (copy, nonatomic) NSArray *disableKeys;

+ (id)actionResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)actionStatusJSONTransformer;

- (void).cxx_destruct;

@end
