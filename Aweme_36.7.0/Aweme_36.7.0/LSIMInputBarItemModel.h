@interface LSIMInputBarItemModel : NSObject

@property (nonatomic) long long modelType;
@property (copy, nonatomic) id /* block */ panelBlock;
@property (copy, nonatomic) id /* block */ iconBlock;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;

@end
