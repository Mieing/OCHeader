@class NSArray, NSDictionary, NSString;

@interface AWEAwemeRewardDrawResponseModel : AWEAwemeResponseModel

@property (retain, nonatomic) NSArray *taskList;
@property (retain, nonatomic) NSDictionary *taskInfoMap;
@property (nonatomic) long long remainCount;
@property (nonatomic) BOOL ignoreLimit;
@property (retain, nonatomic) NSDictionary *schemaMap;
@property (nonatomic) BOOL isFallbackAd;
@property (retain, nonatomic) NSString *contextTrace;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
