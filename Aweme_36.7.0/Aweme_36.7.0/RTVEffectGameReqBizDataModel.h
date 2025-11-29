@class NSNumber, NSString;

@interface RTVEffectGameReqBizDataModel : JSONModel

@property (retain, nonatomic) NSNumber *gameIdentifier;
@property (copy, nonatomic) NSString *gameName;

+ (id)keyMapper;
+ (id)modelWithGameIdentifier:(id)a0 gameName:(id)a1;

- (id)initWithGameIdentifier:(id)a0 gameName:(id)a1;
- (void).cxx_destruct;

@end
