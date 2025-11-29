@class NSArray, NSString;

@interface AWESearchEffectsModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *effectsArray;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasMoreCards;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)effectsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
