@class HTSLiveMemberMessageEffectConfigModel, HTSLiveProfileCardPreviewDock, HTSLiveProfileCardPreviewButton;

@interface IESLivePrivilegeDressPreviewModel : NSObject

@property (retain, nonatomic) HTSLiveProfileCardPreviewButton *rightButton;
@property (retain, nonatomic) HTSLiveProfileCardPreviewDock *profileCardData;
@property (nonatomic) unsigned long long previewType;
@property (retain, nonatomic) HTSLiveMemberMessageEffectConfigModel *userEnterEffectConfig;
@property (retain, nonatomic) id giftNode;
@property (nonatomic) unsigned long long previewSource;

- (void).cxx_destruct;

@end
