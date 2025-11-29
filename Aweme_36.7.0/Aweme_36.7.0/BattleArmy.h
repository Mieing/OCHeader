@class NSString, NSMutableArray;

@interface BattleArmy : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (retain, nonatomic) NSMutableArray *rankListArray;
@property (readonly, nonatomic) unsigned long long rankListArray_Count;
@property (copy, nonatomic) NSString *anchorIdStr;

+ (id)descriptor;

@end
