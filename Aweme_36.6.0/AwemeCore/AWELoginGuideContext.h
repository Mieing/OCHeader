@class AWELoginPanelDismissModel;

@interface AWELoginGuideContext : NSObject

@property (retain, nonatomic) AWELoginPanelDismissModel *dismissModel;
@property (copy, nonatomic) id /* block */ loginPanelManualDismissBlock;
@property (copy, nonatomic) id /* block */ loginPanelShowFinishBlock;

- (void).cxx_destruct;
- (id)init;

@end
