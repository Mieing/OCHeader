@class IESLiveRevenueInteractBattleChooseButton, NSString, SpecifyGiftConfig, HTSLiveImage, IESLiveRevenueInteractBattleChooseBadge, CustomConfig, BattleSelfData;

@interface IESLiveRevenueInteractBattleChooseItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subTitleSuffix;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) IESLiveRevenueInteractBattleChooseBadge *badge;
@property (retain, nonatomic) IESLiveRevenueInteractBattleChooseButton *button;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isForbidden;
@property (copy, nonatomic) NSString *forbiddenText;
@property (copy, nonatomic) NSString *descTagText;
@property (retain, nonatomic) HTSLiveImage *titleIconImage;
@property (copy, nonatomic) NSString *titleIconSchemaURL;
@property (nonatomic) BOOL isSelfData;
@property (nonatomic) long long selfOptId;
@property (retain, nonatomic) BattleSelfData *selfData;
@property (nonatomic) BOOL exposed;
@property (retain, nonatomic) SpecifyGiftConfig *specifyGiftConfig;
@property (retain, nonatomic) CustomConfig *customConfigNew;
@property (retain, nonatomic) HTSLiveImage *backGroundImage;

- (id)initWithBattlePanel:(id)a0;
- (void).cxx_destruct;

@end
