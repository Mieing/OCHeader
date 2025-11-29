@interface RxOperationConditionEvaluator : NSObject

+ (void)evaluate:(struct SharedPtr<Rx::Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> >, Rx::ESPMode::Fast> { struct Array<Rx::SharedPtr<Rx::OperationConditionInterface, Rx::ESPMode::Fast> > *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })a0 forOperation:(id)a1 completion:(id /* block */)a2;

@end
