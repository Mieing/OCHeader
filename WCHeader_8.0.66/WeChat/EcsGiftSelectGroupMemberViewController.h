@class NSString, NSObject;
@protocol EcsGiftSelectGroupMemberViewControllerDelegate;

@interface EcsGiftSelectGroupMemberViewController : EcsGiftContactSelectListBaseViewController <EcsGiftContactSelectListBaseViewControllerDelegate>

@property (retain, nonatomic) NSObject *userData;
@property (weak, nonatomic) id<EcsGiftSelectGroupMemberViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)leftBarbuttonClick;
- (void)viewWillAppear:(BOOL)a0;
- (id)getChatroomContact;
- (id)getReloadContactDataList;
- (void)onSelectedOrCancelContact:(id)a0 isSelected:(BOOL)a1;
- (void)realCallbackSelectContact:(id)a0;
- (void).cxx_destruct;

@end
