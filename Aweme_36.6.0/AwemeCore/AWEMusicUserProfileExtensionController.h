@class AWEProfileExtensionAreaCardModel, NSString, AWEMusicUserProfileEntryCardView, AWEUserModel;

@interface AWEMusicUserProfileExtensionController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWEMusicUserProfileEntryCardView *entryCardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;

- (void)cardWillAppear;
- (void)cardDidDisappear;
- (double)widthOfCard;
- (void)cardClick:(id)a0;
- (id)subtitileWithCardModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (id)cardView;

@end
