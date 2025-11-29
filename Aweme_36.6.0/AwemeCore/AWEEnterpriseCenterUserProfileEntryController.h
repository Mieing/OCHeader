@class AWEProfileExtensionAreaCardModel, NSString, AWEEnterpriseCenterUserProfileEntryCard, AWEUserModel;

@interface AWEEnterpriseCenterUserProfileEntryController : NSObject <AWEEnterpriseCenterUserProfileEntryCardDelegate, AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEEnterpriseCenterUserProfileEntryCard *cardView;
@property (nonatomic) BOOL isTrackedShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 cardModel:(id)a3;

- (void)cardWillAppear;
- (void)cardWillDisappear;
- (double)widthOfCard;
- (void)entryCardDidTapped;
- (void)__trackEnterpriseProfileButtonWithEventName:(id)a0;
- (void).cxx_destruct;

@end
