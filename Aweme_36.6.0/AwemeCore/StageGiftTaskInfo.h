@class NSString, NSMutableArray, CoinWordIcon;

@interface StageGiftTaskInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *token;
@property (nonatomic) int status;
@property (retain, nonatomic) CoinWordIcon *wordIcon;
@property (nonatomic) BOOL hasWordIcon;
@property (retain, nonatomic) NSMutableArray *stageListArray;
@property (readonly, nonatomic) unsigned long long stageListArray_Count;

+ (id)descriptor;

@end
