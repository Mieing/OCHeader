@class NSDictionary, NSString, IESLiveAnchorInteractiveGameModel;
@protocol IESLiveTimorService;

@interface IESLiveGameOpenPlatformAudienceEntranceMsgModel : NSObject <IESLiveGameOpenPlatformInteractEntranceModel>

@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (readonly, nonatomic) IESLiveAnchorInteractiveGameModel *gameModel;
@property (readonly, nonatomic) unsigned long long interactID;
@property (readonly, copy, nonatomic) NSDictionary *extraDict;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) long long gameId;
@property (readonly, nonatomic) NSString *schema;
@property (readonly, nonatomic) NSString *connectId;
@property (readonly, nonatomic) NSString *entranceSchema;
@property (readonly, nonatomic) BOOL audienceJoinEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveAudienceEntranceInfo:(id)a0;
- (id)initWithAudienceXplayMessage:(id)a0;
- (id)initWithAudienceLinkGameInfo:(id)a0 clientAttachedInfo:(id)a1;
- (id)initWithLiveAudienceEntranceMessage:(id)a0;
- (void)updateEntranceSchema:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
