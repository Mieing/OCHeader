@class NSArray, IESECWinExtensionControlnfo;

@interface IESECExtensionCardResponse : IESECBaseApiModel

@property (retain, nonatomic) NSArray *mixFullCards;
@property (retain, nonatomic) IESECWinExtensionControlnfo *controlInfo;

+ (id)mixFullCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
