@class NSArray, NSString, DUXPartialSheet, AWEPageContext, UIScrollView, AWECommonButtonInfoModel, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonVideoDispatchIMGroupViewModel : NSObject <DUXPartialSheetDelegate, AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (nonatomic) BOOL isPersonalRecommendSwitchOn;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIViewController *groupListPanelVC;
@property (retain, nonatomic) DUXPartialSheet *sheet;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) NSArray *groupIDs;
@property (retain, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (Class)aAWEPlayInteractionDSAdapterClass;
+ (void)setVideoDispatchIMGroupPanelShowingBlock;
+ (BOOL)isDarkMode;

- (void)partialSheetWillExpanded:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (void)partialSheetDidDragToExpanded:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (id)aAWEPlayInteractionDSAdapter;
- (void)trackClickEvent;
- (void)onButtonViewClicked;
- (void)configWithButtonModel:(id)a0;
- (id)personalRecommendOnButtonText;
- (id)personalRecommendOffButtonText;
- (void)personalRecommendStatusDidChanged;
- (void)didEnterGroup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
