@class AWEProfileExtensionAreaCardModel, NSString, AWEUserModel, AWECompanyProfileExtensionAreaCard;

@interface AWECompanyProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) AWECompanyProfileExtensionAreaCard *cardView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)configOriginAdInfoWithCardData:(id)a0;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 originCardData:(id)a3;
+ (void)trackTapOriginAdInfo:(id)a0 userModel:(id)a1;
+ (id)cardControllerWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;

- (void)cardWillAppear;
- (BOOL)shouldShowCard;
- (double)widthOfCard;
- (id)initWithUserModel:(id)a0 cardModel:(id)a1 cardIndex:(unsigned long long)a2 extraInfo:(id)a3 reloadCardListBlock:(id /* block */)a4;
- (BOOL)shouldShowHashtag;
- (id)hashtagTitle;
- (id)hashtagSubTitle;
- (BOOL)shouldShowBrand;
- (BOOL)shouldShowStarGravity;
- (void).cxx_destruct;

@end
