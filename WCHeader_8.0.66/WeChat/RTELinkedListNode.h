@interface RTELinkedListNode : MMObject <NSCopying>

@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) RTELinkedListNode *nextNode;
@property (retain, nonatomic) RTELinkedListNode *preNode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearNode;
- (BOOL)canBeMergedInto:(id)a0;
- (void).cxx_destruct;

@end
