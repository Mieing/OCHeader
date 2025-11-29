@class NSString, NSArray, AWEUserModel, NSDictionary, AWEMusicModel, UIViewController, AWEIMMessageConversation, AWEIMDuetData;
@protocol IESIMMessageExternalRefContextProvider;

@interface AWEIMCameraConfigModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *entranceString;
@property (copy, nonatomic) NSString *activityString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long imShootEnterType;
@property (nonatomic) unsigned long long imPublishType;
@property (copy, nonatomic) NSString *imStoryGuidePlusIconType;
@property (copy, nonatomic) NSString *chatGameType;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (nonatomic) long long recordSourceFrom;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *displayNickname;
@property (nonatomic) BOOL dontChangeToTextModeWhenPublish;
@property (nonatomic) BOOL isFollow;
@property (copy, nonatomic) NSArray *stickerIdList;
@property (copy, nonatomic) NSString *mvTemplateID;
@property (nonatomic) BOOL isDuetEffect;
@property (nonatomic) BOOL isSocialEffect;
@property (copy, nonatomic) NSString *slideCategory;
@property (copy, nonatomic) NSString *customPanelName;
@property (copy, nonatomic) NSString *effectUgcData;
@property (retain, nonatomic) AWEIMDuetData *duetData;
@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *ugcId;
@property (nonatomic) BOOL isFromShake;
@property (nonatomic) BOOL shouldJustDismissTopViewController;
@property (nonatomic) BOOL isAIGCShootSame;
@property (copy, nonatomic) id /* block */ publishCompletion;
@property (copy, nonatomic) id /* block */ beforePresentBlock;
@property (copy, nonatomic) id /* block */ openCameraReusltBlock;
@property (copy, nonatomic) id /* block */ didOnScreenBlock;
@property (copy, nonatomic) id /* block */ didSendComplete;
@property (copy, nonatomic) id /* block */ checkSendPrivilegeComplete;
@property (copy, nonatomic) id /* block */ faceChecker;
@property (copy, nonatomic) id /* block */ submitAction;
@property (copy, nonatomic) NSDictionary *dynamicDocs;
@property (nonatomic) BOOL shouldBlockVideo;
@property (nonatomic) BOOL disableProp;
@property (nonatomic) BOOL isSupportExchangeImage;
@property (nonatomic) BOOL disableWatchOnce;
@property (nonatomic) unsigned long long cameraPosition;
@property (nonatomic) BOOL enableMusicComponent;
@property (nonatomic) BOOL defaultOpenPanel;
@property (nonatomic) BOOL enableShowLoading;
@property (copy, nonatomic) NSString *effectBizScene;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (nonatomic) BOOL defaultNotUseEffect;
@property (nonatomic) BOOL disablePreloadStickerSource;
@property (nonatomic) BOOL expandEffectPanel;
@property (nonatomic) BOOL onlyDisplayCurrentEffetInPanel;
@property (nonatomic) BOOL disableLivePhoto;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (copy, nonatomic) NSString *aiExtStr;
@property (copy, nonatomic) NSString *shootTips;
@property (copy, nonatomic) NSString *quoteReplyMessageID;
@property (retain, nonatomic) id<IESIMMessageExternalRefContextProvider> externalRefContextProvider;

- (void).cxx_destruct;

@end
