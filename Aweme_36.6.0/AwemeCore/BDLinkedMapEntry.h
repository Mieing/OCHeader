@interface BDLinkedMapEntry : NSObject

@property (retain, nonatomic) id key;
@property (retain, nonatomic) id obj;
@property (nonatomic) unsigned long long cost;
@property (nonatomic) BOOL isHot;
@property (retain, nonatomic) BDLinkedMapEntry *prev;
@property (retain, nonatomic) BDLinkedMapEntry *next;

- (void).cxx_destruct;

@end
