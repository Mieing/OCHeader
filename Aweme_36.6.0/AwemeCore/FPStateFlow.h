@class NSMutableDictionary;

@interface FPStateFlow : NSObject

@property (retain, nonatomic) id readState;
@property (retain, nonatomic) id readwriteState;
@property (retain, nonatomic) NSMutableDictionary *observers;

+ (id)from:(id)a0;

- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (id)observeKeyPath:(id)a0;

@end
