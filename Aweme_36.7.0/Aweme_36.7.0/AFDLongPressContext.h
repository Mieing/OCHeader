@class AWEAwemeModel, NSString, AWEPageContext, AWEUserModel, NSDictionary, NSMutableSet, AWEEffectModel, AFDInspirationTabItem;
@protocol AWEAwemeLongPressViewModelProtocol, AFDLongPressDelegateProtocol;

@interface AFDLongPressContext : NSObject

@property (nonatomic) long long panelType;
@property (nonatomic) long long animateState;
@property (nonatomic) BOOL enableDynamicTheme;
@property (nonatomic) long long dislikeIndex;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSMutableSet *appearedModels;
@property (nonatomic) BOOL isFromLongPress;
@property (retain, nonatomic) AWEEffectModel *effectModel;
@property (retain, nonatomic) AFDInspirationTabItem *inspirationTabItem;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *longPressEnterFrom;
@property (nonatomic) BOOL disableSendNotificationAfterDismiss;
@property (copy, nonatomic) id /* block */ publishButtonClickedBlock;
@property (nonatomic) BOOL isCellLongPressType;
@property (nonatomic) BOOL needReloadCell;
@property (retain, nonatomic) AWEUserModel *profileUser;
@property (nonatomic) BOOL shouldShowIMCreateGroupAndShare;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<AFDLongPressDelegateProtocol> longPressDelegate;
@property (weak, nonatomic) id<AWEAwemeLongPressViewModelProtocol> longPressViewModel;

- (void).cxx_destruct;
- (id)init;

@end
