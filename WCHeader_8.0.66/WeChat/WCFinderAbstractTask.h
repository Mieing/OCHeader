@interface WCFinderAbstractTask : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (nonatomic, getter=isCancelAction) BOOL cancelAction;

- (id)initWithAction:(id /* block */)a0;
- (void)preformAction:(id /* block */)a0 fail:(id /* block */)a1;
- (void)asyncPreformAction:(id /* block */)a0 fail:(id /* block */)a1;
- (void).cxx_destruct;

@end
