@class NSString, NSMutableArray;

@interface DeltaScoreInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *deltaScore;
@property (retain, nonatomic) NSMutableArray *deltaDetailsArray;
@property (readonly, nonatomic) unsigned long long deltaDetailsArray_Count;

+ (id)descriptor;

@end
