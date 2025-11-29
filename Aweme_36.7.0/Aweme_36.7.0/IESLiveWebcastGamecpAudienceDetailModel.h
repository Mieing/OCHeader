@class NSString;

@interface IESLiveWebcastGamecpAudienceDetailModel : IESLiveWebcastBaseModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *gameStage;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *promoterId;
@property (copy, nonatomic) NSString *promoteScene;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *defaultTabId;
@property (copy, nonatomic) NSString *isFullscreen;
@property (copy, nonatomic) NSString *canHalfscreen;
@property (copy, nonatomic) NSString *useBackIcon;
@property (copy, nonatomic) NSString *bizMode;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
