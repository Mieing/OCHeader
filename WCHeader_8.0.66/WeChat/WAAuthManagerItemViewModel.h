@class WxaUseUserInfoItem_ScopeItem;

@interface WAAuthManagerItemViewModel : NSObject

@property (retain, nonatomic) WxaUseUserInfoItem_ScopeItem *scopeItem;
@property (nonatomic) BOOL isEdit;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) id /* block */ reloadUIAction;

- (id)initWithScopeItem:(id)a0 isEdit:(BOOL)a1;
- (void).cxx_destruct;

@end
