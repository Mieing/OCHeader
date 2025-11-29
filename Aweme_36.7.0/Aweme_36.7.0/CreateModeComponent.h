@class BaseComponent, NSMutableArray;

@interface CreateModeComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (retain, nonatomic) NSMutableArray *tabConfigArray;
@property (readonly, nonatomic) unsigned long long tabConfigArray_Count;
@property (nonatomic) int selectTab;

+ (id)descriptor;

@end
