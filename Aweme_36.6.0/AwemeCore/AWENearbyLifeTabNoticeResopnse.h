@class AWENearbyLifeInsertForwardCardData;

@interface AWENearbyLifeTabNoticeResopnse : AWEBaseApiModel

@property (copy, nonatomic) AWENearbyLifeInsertForwardCardData *forwardCardData;

+ (BOOL)automaticallyDefaultMapping;
+ (id)forwardCardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
