@class NSArray, AWESearchMerchandiseCommonProp;

@interface AWESearchMerchandiseSearchWordList : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseCommonProp *commonProp;
@property (retain, nonatomic) NSArray *elementList;

+ (id)elementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
