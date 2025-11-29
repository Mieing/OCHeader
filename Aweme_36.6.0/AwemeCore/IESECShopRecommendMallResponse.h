@class NSString, NSArray, NSDictionary, IESECURLModel, NSNumber, IESECShopRecommendFeedResponse;

@interface IESECShopRecommendMallResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *mallUrl;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSArray *products;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSNumber *moduleType;
@property (copy, nonatomic) NSString *nextPageParam;
@property (nonatomic) BOOL hasNextPage;
@property (copy, nonatomic) IESECShopRecommendFeedResponse *recommendFeed;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *recommendSubText;
@property (retain, nonatomic) IESECURLModel *cardBgPic;
@property (retain, nonatomic) IESECURLModel *recommendTextPic;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
