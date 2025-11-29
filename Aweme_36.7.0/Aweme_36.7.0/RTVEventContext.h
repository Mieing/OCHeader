@class NSDictionary, BDEBEvent;

@interface RTVEventContext : NSObject

@property (readonly, nonatomic) BDEBEvent *event;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) id poster;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
