@class NSArray;

@interface AEKElementDiffResult : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSArray *changes;

- (id)initWithType:(unsigned long long)a0 data:(id)a1 changes:(id)a2;
- (void).cxx_destruct;

@end
