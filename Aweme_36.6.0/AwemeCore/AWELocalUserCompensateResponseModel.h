@class NSArray, NSString;

@interface AWELocalUserCompensateResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *familiarArray;
@property (retain, nonatomic) NSArray *colorRingArray;
@property (copy, nonatomic) NSString *tableMeta;
@property (copy, nonatomic) NSString *currentUserID;

+ (id)colorRingArrayJSONTransformer;
+ (id)familiarArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)currentArrayWithTableName:(id)a0;
- (void).cxx_destruct;

@end
