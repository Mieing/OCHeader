@class NSMutableArray;

@interface EquipState : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *equipsArray;
@property (readonly, nonatomic) unsigned long long equipsArray_Count;
@property (nonatomic) int equipCapacity;

+ (id)descriptor;

@end
