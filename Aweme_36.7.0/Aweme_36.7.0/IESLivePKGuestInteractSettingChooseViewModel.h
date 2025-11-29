@class NSString, NSArray, NSMutableArray;
@protocol IESLivePKGuestInteractSettingsAction;

@interface IESLivePKGuestInteractSettingChooseViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) int selectedIndex;
@property (nonatomic) unsigned long long currentScene;
@property (copy, nonatomic) id /* block */ onItemSelected;
@property (retain, nonatomic) NSMutableArray *authorityItems;
@property (nonatomic) BOOL isOnlyJoinThroughInvitation;
@property (weak, nonatomic) id<IESLivePKGuestInteractSettingsAction> actionDelegate;

- (void)didClickItem:(int)a0 completion:(id /* block */)a1;
- (void)updateWithAuthoritySettings:(id)a0;
- (void).cxx_destruct;

@end
