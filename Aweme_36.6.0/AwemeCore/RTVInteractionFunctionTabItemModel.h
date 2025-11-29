@class NSString, NSObject;

@interface RTVInteractionFunctionTabItemModel : NSObject

@property (readonly, nonatomic) long long tabType;
@property (readonly, copy, nonatomic) NSString *tabName;
@property (readonly, nonatomic) Class contentClass;
@property (readonly, nonatomic) NSObject *contentViewModel;

- (id)initWithType:(long long)a0 tabName:(id)a1 contentClass:(Class)a2 viewModel:(id)a3;
- (void).cxx_destruct;

@end
