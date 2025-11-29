@class NSArray;

@interface IESECWinInsertCardsResponse : IESECBaseApiModel

@property (retain, nonatomic) NSArray *mixFullCards;

+ (id)mixFullCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
