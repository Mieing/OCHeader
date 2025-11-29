@class AWEProfileExtensionAreaCardModel, AWEProfileExtensionAreaCommonParamModel, NSDictionary, NSString, AWEUserModel, AWEIMFansGroupProfileEntryCard;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEIMFansGroupProfileEntryController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEIMFansGroupProfileEntryCard *cardView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) unsigned long long cardIndex;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (nonatomic) BOOL isMyEntry;
@property (nonatomic) BOOL isFirstShow;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardViewNew;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (BOOL)shouldShowCardWithUserModel:(id)a0;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 cardModel:(id)a3 cardIndex:(unsigned long long)a4 extraInfoDict:(id)a5;
+ (void)trackEventName:(id)a0 userModel:(id)a1 cardModel:(id)a2 cardIndex:(unsigned long long)a3 extraInfoDict:(id)a4;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (BOOL)shouldShowCard;
- (void)cardDidDisappear;
- (double)widthOfCard;
- (void)__cardClick;
- (void)AWEIMFansGroupExportUpdateNoti;
- (void)__trackEventName:(id)a0;
- (BOOL)__isMyEntry;
- (void).cxx_destruct;
- (id)init;

@end
