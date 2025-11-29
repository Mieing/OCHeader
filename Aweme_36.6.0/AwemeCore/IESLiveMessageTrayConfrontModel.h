@class HTSLiveToutiaoMatchData, NSString, NSArray, IESLivePSComponentConfigModel, NSMutableArray;

@interface IESLiveMessageTrayConfrontModel : NSObject

@property (copy, nonatomic) NSString *mainContent;
@property (copy, nonatomic) NSString *guestContent;
@property (nonatomic) long long lastMainCount;
@property (nonatomic) long long lastGuestCount;
@property (retain, nonatomic) NSMutableArray *mainMessages;
@property (retain, nonatomic) NSMutableArray *guestMessages;
@property (retain, nonatomic) NSArray *confrontIcons;
@property (nonatomic) BOOL sourceReady;
@property (retain, nonatomic) HTSLiveToutiaoMatchData *matchData;
@property (nonatomic) BOOL disableAnimation;
@property (weak, nonatomic) IESLivePSComponentConfigModel *configModel;

- (BOOL)didPrepared;
- (id)initWithMatchHotMessage:(id)a0;
- (BOOL)doMergeMessage:(id)a0;
- (void)consumeMessage:(id)a0;
- (void)mergeMessage:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
