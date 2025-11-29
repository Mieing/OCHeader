@class NSString, WASessionContentSendMsgInfo;

@interface WATempSessionInfo : MMObject

@property (retain, nonatomic) NSString *sessionFrom;
@property (retain, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int debugMode;
@property (nonatomic) unsigned int weappVersion;
@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSString *businessUserName;
@property (retain, nonatomic) NSString *headimgUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isInWeAppSheetMode;
@property (retain, nonatomic) WASessionContentSendMsgInfo *sendMsgInfo;
@property (nonatomic) unsigned long long newScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (copy, nonatomic) NSString *fromAppId;

- (void).cxx_destruct;

@end
