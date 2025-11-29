@class NSString, HTSLiveSceneSubscriptionData;

@interface HTSLiveSettingTab : IESLivePBBaseMessage

@property (nonatomic) BOOL showTab;
@property (nonatomic) BOOL showShare;
@property (copy, nonatomic) NSString *shareImCardMsg;
@property (copy, nonatomic) NSString *shareQrSchemaGameInfo;
@property (copy, nonatomic) NSString *shareQrSchemaExtraToGame;
@property (copy, nonatomic) NSString *shareQrDesc;
@property (retain, nonatomic) HTSLiveSceneSubscriptionData *sceneSubscriptionData;
@property (nonatomic) BOOL hasSceneSubscriptionData;

+ (id)descriptor;

@end
