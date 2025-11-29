@class NSMutableDictionary, NSMapTable;

@interface TempoVariableZone : NSObject

@property (retain, nonatomic) NSMutableDictionary *variables;
@property (retain, nonatomic) NSMapTable *weakVariables;
@property (retain, nonatomic) TempoVariableZone *next;
@property (nonatomic) BOOL detached;

- (id)variableValueForName:(id)a0;
- (BOOL)assignVariable:(id)a0 value:(id)a1;
- (BOOL)addVariable:(id)a0 value:(id)a1;
- (id)mutableCheck:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
