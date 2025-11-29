@protocol FPViewContainer, FPUIHolderContainer;

@interface FPLayoutActionBuilder : NSObject <FPLayoutActionBuilder>

@property (weak, nonatomic) id<FPViewContainer> viewContainer;
@property (weak, nonatomic) id<FPUIHolderContainer> holderContainer;

- (id)bindedActionWithAction:(id)a0;
- (id)initWithViewContainer:(id)a0;
- (void).cxx_destruct;

@end
