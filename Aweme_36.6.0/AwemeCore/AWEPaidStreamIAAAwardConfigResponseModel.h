@class NSNumber, AWEPaidStreamIAAAwardConfigModel, NSString;

@interface AWEPaidStreamIAAAwardConfigResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaidStreamIAAAwardConfigModel *currentAwardConfig;
@property (retain, nonatomic) AWEPaidStreamIAAAwardConfigModel *nextAwardConfig;
@property (nonatomic) BOOL hasConsequentAwardConfig;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)currentAwardConfigJSONTransformer;
+ (id)nextAwardConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
