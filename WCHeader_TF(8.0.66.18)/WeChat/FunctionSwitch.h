@class SKBuiltinBuffer_t;

@interface FunctionSwitch : WXPBGeneratedMessage

@property (nonatomic) unsigned int functionId;
@property (nonatomic) unsigned int switchValue;
@property (retain, nonatomic) SKBuiltinBuffer_t *ticket;
@property (nonatomic) unsigned int ticketType;

+ (void)initialize;

- (void)setTicketType:(unsigned int)a0;
- (unsigned int)ticketType;
- (void)setTicket:(id)a0;
- (id)ticket;
- (void)setSwitchValue:(unsigned int)a0;
- (unsigned int)switchValue;
- (void)setFunctionId:(unsigned int)a0;
- (unsigned int)functionId;

@end
