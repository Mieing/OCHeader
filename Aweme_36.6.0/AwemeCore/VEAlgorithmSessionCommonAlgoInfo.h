@class NSString, NSArray, VEAlgorithmSessionCommonAlgoUnion, NSDictionary;

@interface VEAlgorithmSessionCommonAlgoInfo : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) VEAlgorithmSessionCommonAlgoUnion *unionValue1;
@property (retain, nonatomic) VEAlgorithmSessionCommonAlgoUnion *unionValue2;
@property (retain, nonatomic) NSString *jsonString;
@property (retain, nonatomic) NSArray *vecCommUnion;
@property (retain, nonatomic) NSArray *matCommUnion;
@property (retain, nonatomic) NSDictionary *mapCommUnion;

- (void).cxx_destruct;

@end
