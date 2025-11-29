@class NSString, NSArray, NSMutableArray;
@protocol IESLiveAudienceInteractiveSettingsAction;

@interface IESLiveInteractionChooseViewModel : NSObject

@property (retain, nonatomic) id<IESLiveAudienceInteractiveSettingsAction> audienceInteractiveSettingsAction;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) int selectedIndex;
@property (nonatomic) unsigned long long currentScene;
@property (copy, nonatomic) id /* block */ succeedToUpdate;
@property (copy, nonatomic) id /* block */ onItemSelected;
@property (retain, nonatomic) NSMutableArray *authorityItems;
@property (nonatomic) BOOL isOnlyJoinThroughInvitation;

- (void)didClickItem:(int)a0 completion:(id /* block */)a1;
- (void)updateWithAuthoritySettings:(id)a0;
- (void).cxx_destruct;

@end
