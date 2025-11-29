@interface BDREInstruction : NSObject

@property (nonatomic) unsigned int instruction;
@property (retain, nonatomic) id value;

+ (id)commandsWithJsonArray:(id)a0;

- (id)jsonFormat;
- (id)initWithInstruction:(unsigned int)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)command;
- (id)initWithDictionary:(id)a0;

@end
