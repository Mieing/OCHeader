@class RTEAttributeNode, RTELinkedListNode;

@interface RTELinkedList : MMObject <NSCopying>

@property (retain, nonatomic) RTEAttributeNode *headAttributeNode;
@property (weak, nonatomic) RTEAttributeNode *cacheAttributeNode;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) RTELinkedListNode *headNode;
@property (weak, nonatomic) RTELinkedListNode *cacheNode;
@property (nonatomic) unsigned long long cacheLocation;
@property (nonatomic) unsigned long long totalLength;

+ (id)creatEmptyList:(unsigned int)a0 Length:(unsigned long long)a1;

- (BOOL)updateListIndexSinceHeadNode:(id)a0 withLocation:(unsigned long long)a1 withTotalLength:(unsigned long long)a2;
- (void)resetIndexAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containNodeMatch:(id /* block */)a0 InRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)canSetHeadIndexToOrderListNode:(id)a0;
- (id)description;
- (id)getFrontAttributeNodeWithType:(unsigned int)a0 SinceIndex:(unsigned long long)a1;
- (id)getAfterAttributeNodeWithType:(unsigned int)a0 SinceIndex:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfNode:(id)a0;
- (void)updateCacheToIndex:(unsigned long long)a0;
- (void)deleteNodesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertNodes:(id)a0 ofLength:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)appendNodes:(id)a0 ofLength:(unsigned long long)a1;
- (id)copyListInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)mergeNodesStartFrom:(id)a0 isForward:(BOOL)a1;
- (void).cxx_destruct;

@end
