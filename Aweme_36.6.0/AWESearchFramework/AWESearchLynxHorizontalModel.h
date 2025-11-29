@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWESearchLynxHorizontalModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *alasrc;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSArray *dataList;
@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *rankId;
@property (copy, nonatomic) NSString *rankPOIs;
@property (retain, nonatomic) NSNumber *boardType;
@property (retain, nonatomic) NSString *boardSubType;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)bindAwemeToItem:(id)a0;
- (void).cxx_destruct;

@end
