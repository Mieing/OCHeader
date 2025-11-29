@class NSString, IESGCPPBSceneSubscriptionData;

@interface IESGCPPBSettingTab : GPBMessage

@property (nonatomic) BOOL showTab;
@property (nonatomic) BOOL showShare;
@property (copy, nonatomic) NSString *shareImCardMsg;
@property (copy, nonatomic) NSString *shareQrSchemaGameInfo;
@property (copy, nonatomic) NSString *shareQrSchemaExtraToGame;
@property (copy, nonatomic) NSString *shareQrDesc;
@property (retain, nonatomic) IESGCPPBSceneSubscriptionData *sceneSubscriptionData;
@property (nonatomic) BOOL hasSceneSubscriptionData;

+ (id)descriptor;

@end
