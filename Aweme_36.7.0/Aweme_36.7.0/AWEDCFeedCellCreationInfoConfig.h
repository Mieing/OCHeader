@class NSString;

@interface AWEDCFeedCellCreationInfoConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL shouldHiddenActionElement;
@property (copy, nonatomic) id /* block */ shouldHiddenCellResourceBlock;
@property (nonatomic) BOOL enableUserInfoInteraction;
@property (copy, nonatomic) id /* block */ shouldPerformUserTapActionBlock;
@property (copy, nonatomic) id /* block */ userInfoExtraUrlParamsBlock;
@property (copy, nonatomic) NSString *avatarBizTag;
@property (nonatomic) BOOL enableDiggInteraction;
@property (copy, nonatomic) id /* block */ shouldPerformDiggActionBlock;
@property (copy, nonatomic) NSString *diggText;
@property (copy, nonatomic) id /* block */ diggLogExtraDictBlock;
@property (copy, nonatomic) id /* block */ updateDiggInteractorAndConfigBlock;
@property (copy, nonatomic) id /* block */ actionElementConfigBuilder;
@property (copy, nonatomic) id /* block */ actionInfoElementAlphaBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
