@class NSString;

@interface ProcessingInstruction : Node

@property (retain, nonatomic) NSString *target;
@property (retain, nonatomic) NSString *data;

- (id)initProcessingInstruction:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
