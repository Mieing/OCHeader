@class AWEProfileExtensionAreaCardModel, NSString, AWEIronManCradView, AWEUserModel;

@interface AWEIronManUserProfileEntryController : NSObject <AWEIronManCradViewDelegate, AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEIronManCradView *cardView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) BOOL shouldReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;

- (void)cardWillAppear;
- (void)cardDidDisappear;
- (double)widthOfCard;
- (void)cradViewDidClick:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
