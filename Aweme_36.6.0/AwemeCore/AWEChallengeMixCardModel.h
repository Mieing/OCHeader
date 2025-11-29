@class NSString, AWEChallengeLiveCard, AWEAwemeModel;

@interface AWEChallengeMixCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEChallengeLiveCard *roomInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *searchResultID;

+ (id)awemeModelJSONTransformer;
+ (id)roomInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
