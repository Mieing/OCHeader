@class NSString;

@interface DeltaScoreInfo_DeltaDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *deltaScore;

+ (id)descriptor;

@end
