@protocol BDDataBuilderOperatorDelegate;

@interface BDDataBuilderBaseOperator : NSObject

@property (weak, nonatomic) id<BDDataBuilderOperatorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
