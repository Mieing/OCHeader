@class AWEProfileExtensionAreaCardModel, NSString, NSDictionary, AWEUserModel, AWEConcernFansToolProfileEntryCard;

@interface AWEConcernFansToolProfileEntryController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEConcernFansToolProfileEntryCard *cardView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) unsigned long long cardIndex;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (nonatomic) BOOL isMyEntry;
@property (nonatomic) BOOL isFirstShow;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 cardModel:(id)a3 cardIndex:(unsigned long long)a4 extraInfoDict:(id)a5;

- (void)cardWillAppear;
- (void)cardDidDisappear;
- (double)widthOfCard;
- (void)__cardClick;
- (void).cxx_destruct;
- (id)init;

@end
