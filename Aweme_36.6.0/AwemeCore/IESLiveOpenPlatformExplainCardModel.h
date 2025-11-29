@class NSString, GameCard;

@interface IESLiveOpenPlatformExplainCardModel : NSObject

@property (readonly, nonatomic) unsigned long long explainStatus;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, copy, nonatomic) NSString *openURL;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) int saveTime;
@property (readonly, nonatomic) int duration;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) GameCard *gameCard;

- (id)initWithGameCardInfo:(id)a0;
- (unsigned long long)_convertExplainStatus:(int)a0;
- (unsigned long long)_convertTriggerType:(int)a0;
- (id)_convertGameCard:(id)a0;
- (void).cxx_destruct;

@end
