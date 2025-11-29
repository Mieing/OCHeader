@class NSArray;

@interface WCBusyThreadProfile : NSObject

@property (nonatomic) unsigned int thread;
@property (retain, nonatomic) NSArray *callTree;

- (id)initWithThread:(unsigned int)a0 callTree:(id)a1;
- (void).cxx_destruct;

@end
