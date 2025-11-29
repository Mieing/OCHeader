@interface GameReportOrderItem : MMObject

@property (nonatomic) int order;
@property (retain, nonatomic) id value;

+ (id)itemWithOrder:(unsigned int)a0 AndValue:(id)a1;

- (void).cxx_destruct;

@end
