@class NSString, TextStateModel;

@interface TextStateCardReporter : NSObject

@property (nonatomic) unsigned long long cardDurationTime;
@property (nonatomic) long long exitType;
@property (retain, nonatomic) TextStateModel *textState;
@property (nonatomic) long long scene;
@property (nonatomic) long long subScene;
@property (nonatomic) unsigned int sessionScene;
@property (retain, nonatomic) NSString *sceneSessionId;
@property (nonatomic) unsigned long long positionInCardList;
@property (retain, nonatomic) NSString *cardListId;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) BOOL isPullDown;
@property (nonatomic) BOOL hasNotify;
@property (nonatomic) BOOL hasIconRedDot;
@property (nonatomic) BOOL hasTruncatedLink;
@property (nonatomic) long long clickIconAction;
@property (nonatomic) unsigned long long cardExposeTime;

+ (void)reportAction:(long long)a0 scene:(long long)a1 contact:(id)a2;
+ (void)reportAction:(long long)a0 actionExtraInfo:(id)a1 textState:(id)a2 scene:(long long)a3 subScene:(long long)a4 sessionId:(id)a5 sceneSessionId:(id)a6 positionInCardList:(unsigned long long)a7 cardListId:(id)a8 exitType:(long long)a9 stayDuration:(unsigned long long)a10 isPullDown:(BOOL)a11 hasIconRedDot:(BOOL)a12 hasTruncatedLink:(BOOL)a13 requestId:(unsigned long long)a14;
+ (id)getStatusIdAppendString:(id)a0;
+ (BOOL)isImportantAction:(long long)a0;
+ (id)getSessionIdForScene:(long long)a0 textStateId:(id)a1;
+ (id)extraInfoForAction:(long long)a0 textState:(id)a1 sameFriendCount:(unsigned long long)a2 hasReddot:(BOOL)a3;
+ (long long)relationShipWithUsername:(id)a0;
+ (long long)clusterType;
+ (id)getMultiPublishRedDotsExtraInfo:(BOOL)a0;

- (void)cardExpose;
- (void)_innerCardExpose;
- (void)cardExitWithType:(long long)a0;
- (void)reportAction:(long long)a0;
- (void)reportAction:(long long)a0 extraInfo:(id)a1;
- (id)getSessionId;
- (void).cxx_destruct;

@end
