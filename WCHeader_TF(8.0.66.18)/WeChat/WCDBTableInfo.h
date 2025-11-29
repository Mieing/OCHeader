@class NSNumber, NSMutableArray;

@interface WCDBTableInfo : NSObject {
    NSMutableArray *_schemas;
    NSMutableArray *_sequences;
    NSNumber *_count;
}

- (void)setCount:(id)a0;
- (void)addSchema:(id)a0;
- (void)addSequence:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
