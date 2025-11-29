@interface WCMomentsDetailActionItem : NSObject

@property (readonly, nonatomic) long long actionType;
@property (copy, nonatomic) id /* block */ getActionTitleBlock;
@property (copy, nonatomic) id /* block */ getActionTipsBlock;
@property (copy, nonatomic) id /* block */ displayBlock;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithActionType:(long long)a0;
- (id)getActionTitle;
- (id)getActionTips;
- (void)didDisplayActionItem;
- (void)didClickActionItem;
- (void).cxx_destruct;

@end
