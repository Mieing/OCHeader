@class NSString, MMMenuController;

@interface MMMenuService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMMenuController *menuController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMenuController;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
