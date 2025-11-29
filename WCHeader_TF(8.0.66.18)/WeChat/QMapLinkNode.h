@interface QMapLinkNode : NSObject

@property (weak, nonatomic) QMapLinkNode *prev;
@property (weak, nonatomic) QMapLinkNode *next;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) id key;
@property (nonatomic) unsigned long long cost;

- (id)initWithObject:(id)a0 key:(id)a1 cost:(unsigned long long)a2;
- (void).cxx_destruct;

@end
