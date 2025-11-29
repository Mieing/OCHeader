@interface IESECCombineInfoNode : NSObject {
    unsigned long long _type;
    id _data;
    unsigned long long _skipedCount;
}

@property (retain, nonatomic) IESECCombineInfoNode *next;

- (id)processData:(id)a0 flag:(BOOL *)a1;
- (void).cxx_destruct;
- (BOOL)skip;
- (id)map:(id)a0;
- (id)initWithType:(unsigned long long)a0 data:(id)a1;
- (BOOL)distinct:(id)a0;
- (BOOL)ignore:(id)a0;
- (BOOL)filter:(id)a0;

@end
