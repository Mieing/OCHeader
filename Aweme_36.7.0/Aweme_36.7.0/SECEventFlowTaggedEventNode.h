@class NSString, SECEventFlowEvent;
@protocol SECEventFlowTaggedEventNodeProtocol;

@interface SECEventFlowTaggedEventNode : NSObject <SECEventFlowTaggedEventNodeProtocol>

@property (retain, nonatomic) id<SECEventFlowTaggedEventNodeProtocol> prev;
@property (retain, nonatomic) id<SECEventFlowTaggedEventNodeProtocol> next;
@property (retain, nonatomic) id<SECEventFlowTaggedEventNodeProtocol> nextBySource;
@property (nonatomic) BOOL fake;
@property (retain, nonatomic) SECEventFlowEvent *event;
@property (retain, nonatomic) NSString *tag;

- (id)initWithEvent:(id)a0 tag:(id)a1;
- (void).cxx_destruct;

@end
