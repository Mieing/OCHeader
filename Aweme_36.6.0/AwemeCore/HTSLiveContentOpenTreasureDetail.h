@class NSString, NSMutableArray;

@interface HTSLiveContentOpenTreasureDetail : IESLivePBBaseMessage

@property (nonatomic) int coinTaskType;
@property (copy, nonatomic) NSString *contentNew;
@property (copy, nonatomic) NSString *contentReceive;
@property (copy, nonatomic) NSString *countDownKey;
@property (nonatomic) long long countDown;
@property (nonatomic) int contentNewSeconds;
@property (retain, nonatomic) NSMutableArray *contentReceiveRollArray;
@property (readonly, nonatomic) unsigned long long contentReceiveRollArray_Count;

+ (id)descriptor;

@end
