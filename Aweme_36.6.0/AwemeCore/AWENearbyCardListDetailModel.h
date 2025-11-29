@class NSArray, NSString, AWENearbyCardRejectModel;

@interface AWENearbyCardListDetailModel : AWEBaseApiModel

@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSArray *cards;
@property (retain, nonatomic) NSString *cardRequestID;
@property (retain, nonatomic) AWENearbyCardRejectModel *cardRejectInfo;

+ (id)cardsJSONTransformer;
+ (id)cardRejectInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
