@class BaseComponent, GPBInt32ObjectDictionary;

@interface CategoryComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (retain, nonatomic) GPBInt32ObjectDictionary *selectNode;
@property (readonly, nonatomic) unsigned long long selectNode_Count;

+ (id)descriptor;

@end
