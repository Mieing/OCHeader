@class NSString;

@interface MMWebCustomLog : MMObject

@property (retain, nonatomic) NSString *preMsgUrl;
@property (retain, nonatomic) NSString *preMsgTitle;
@property (retain, nonatomic) NSString *preMsgDesc;
@property (retain, nonatomic) NSString *preMsgIconUrl;
@property (retain, nonatomic) NSString *preMsgAppId;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *currentTitle;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *msgUrl;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgDesc;
@property (retain, nonatomic) NSString *msgIconUrl;
@property (nonatomic) unsigned long long toScene;
@property (nonatomic) unsigned long long sendToFriendsTimes;
@property (nonatomic) unsigned long long shareTimelineTimes;

- (id)init;
- (void)uploadKV;
- (void)recordPreMsgUrl:(id)a0 preMsgTitle:(id)a1 preMsgDesc:(id)a2 preMsgIconUrl:(id)a3 preMsgAppId:(id)a4 fromScence:(unsigned long long)a5;
- (void)recordCurrentUrl:(id)a0 currentTitle:(id)a1 currentAppId:(id)a2;
- (void)recordShareMsgUrl:(id)a0 msgTitle:(id)a1 msgDesc:(id)a2 msgIconUrl:(id)a3 toScene:(unsigned long long)a4;
- (void).cxx_destruct;

@end
