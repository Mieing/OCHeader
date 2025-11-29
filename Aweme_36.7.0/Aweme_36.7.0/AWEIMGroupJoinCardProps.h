@class AWEIMGroupJoinCardPresenterModel, NSArray;

@interface AWEIMGroupJoinCardProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMGroupJoinCardPresenterModel *presenterModel;
@property (copy, nonatomic) NSArray *iconItems;
@property (copy, nonatomic) id /* block */ tapFunctionBlock;
@property (copy, nonatomic) id /* block */ willDisplayModel;
@property (copy, nonatomic) id /* block */ closeTapBlock;

- (void).cxx_destruct;

@end
