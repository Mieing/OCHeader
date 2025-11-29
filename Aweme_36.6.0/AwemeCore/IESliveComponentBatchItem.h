@class NSString, NSMutableSet, NSMutableArray;

@interface IESliveComponentBatchItem : NSObject

@property (retain, nonatomic) NSMutableArray *components;
@property (nonatomic) double finishedTime;
@property (nonatomic) double waitDuration;
@property (retain, nonatomic) NSString *serialName;
@property (weak, nonatomic) IESliveComponentBatchItem *previousBatchItem;
@property (weak, nonatomic) IESliveComponentBatchItem *nextBatchItem;
@property (retain, nonatomic) NSMutableSet *componentNames;
@property (nonatomic) long long belongLvel;
@property (nonatomic) BOOL finished;

- (void).cxx_destruct;
- (id)init;

@end
