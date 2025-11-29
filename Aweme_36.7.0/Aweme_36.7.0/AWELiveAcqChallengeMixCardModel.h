@class NSString, AWELiveAcqChallengeLiveCard, AWEAwemeModel;

@interface AWELiveAcqChallengeMixCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWELiveAcqChallengeLiveCard *roomInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *searchResultID;

+ (id)awemeModelJSONTransformer;
+ (id)roomInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
