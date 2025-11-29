@class AWEGrouponLifeInsertForwardCardData;

@interface AWEGrouponLifeTabNoticeResopnse : AWEBaseApiModel

@property (copy, nonatomic) AWEGrouponLifeInsertForwardCardData *forwardCardData;

+ (BOOL)automaticallyDefaultMapping;
+ (id)forwardCardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
