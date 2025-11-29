@class NSArray, NSString;

@interface AWEPaidStreamIAAGetSendAwardConfigV2ResultData : AWEBaseApiModel

@property (copy, nonatomic) NSArray *ADConfigList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *logID;

+ (id)ADConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
