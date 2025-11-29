@class NSArray, NSString;

@interface AWENearbyLifeDualAnchorInfo : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *background;
@property (nonatomic) long long backgroundRound;
@property (retain, nonatomic) NSArray *padding;

+ (BOOL)automaticallyDefaultMapping;
+ (id)itemsJSONTransformer;

- (void).cxx_destruct;

@end
