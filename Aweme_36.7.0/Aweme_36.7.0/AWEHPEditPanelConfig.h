@interface AWEHPEditPanelConfig : NSObject

@property (copy, nonatomic) id /* block */ saveItemsBlock;
@property (copy, nonatomic) id /* block */ canShowEditBlock;
@property (copy, nonatomic) id /* block */ getItemsBlock;
@property (copy, nonatomic) id /* block */ currentChannelID;
@property (copy, nonatomic) id /* block */ editPanelShow;

- (void).cxx_destruct;

@end
