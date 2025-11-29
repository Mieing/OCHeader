@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWECompanyProfileExtensionAreaCardControllerV2 : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL tracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (id)configOriginAdInfoWithCardData:(id)a0;
+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 originCardData:(id)a3;
+ (void)trackTapOriginAdInfo:(id)a0 userModel:(id)a1;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (BOOL)shouldShowCard;
- (BOOL)shouldShowHashtag;
- (id)hashtagTitle;
- (BOOL)shouldShowBrand;
- (BOOL)shouldShowStarGravity;
- (id)hashtagSubtitle;
- (void)p_cardWillAppear;
- (void).cxx_destruct;

@end
