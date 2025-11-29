@interface RTVVoipMissCallConfig : NSObject

@property (readonly, nonatomic) BOOL enableFeedPush;
@property (readonly, nonatomic) BOOL enableEffectGamePush;
@property (readonly, nonatomic) unsigned long long descStyle;
@property (readonly, nonatomic) BOOL replyForInviterOnline;
@property (readonly, nonatomic) BOOL onlineStatusForInviter;
@property (readonly, nonatomic) BOOL enableOnlineStatus;
@property (readonly, nonatomic) BOOL hasCoPlayFeature;

- (id)initWithEnableFeedPush:(BOOL)a0 enableEffectGamePush:(BOOL)a1 descStyle:(unsigned long long)a2 replyForInviterOnline:(BOOL)a3 onlineStatusForInviter:(BOOL)a4 enableOnlineStatus:(BOOL)a5 hasCoPlayFeature:(BOOL)a6;

@end
