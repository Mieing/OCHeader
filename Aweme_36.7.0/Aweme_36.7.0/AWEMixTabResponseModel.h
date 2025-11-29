@class NSArray, NSNumber;

@interface AWEMixTabResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *mixCards;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)mixCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
