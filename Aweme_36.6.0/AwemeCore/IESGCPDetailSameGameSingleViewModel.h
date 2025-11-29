@class IESGCPPBGameDetailRelatedGameInfo, NSString, UIColor, NSNumber;

@interface IESGCPDetailSameGameSingleViewModel : NSObject

@property (nonatomic) BOOL isHeliumGame;
@property (retain, nonatomic) IESGCPPBGameDetailRelatedGameInfo *pbModel;
@property (readonly, copy, nonatomic) NSString *iconUrl;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) UIColor *buttonTextColor;
@property (readonly, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) NSNumber *roomId;
@property (readonly, copy, nonatomic) NSString *gameId;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) BOOL canOpenAppStore;
@property (readonly, copy, nonatomic) NSString *activeLink;
@property (readonly, copy, nonatomic) NSString *openGameURL;
@property (readonly, copy, nonatomic) NSString *iosAppId;
@property (readonly, copy, nonatomic) NSString *gameRating;
@property (copy, nonatomic) NSString *unsupportedDownloadToast;

- (void)trackHeliumGameEntranceShow;
- (void)trackHeliumGameEntranceClick;
- (id)heliumGameTrackParams;
- (void)handleHeliumGameClickAction;
- (void)handleAppClickActionWithTrackParams:(id)a0 completion:(id /* block */)a1;
- (void)handleHeliumGameShowAction;
- (id)initWithPbModel:(id)a0;
- (void).cxx_destruct;

@end
