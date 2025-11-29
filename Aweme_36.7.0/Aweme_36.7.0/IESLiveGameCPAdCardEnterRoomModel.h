@class NSString, IESLiveGCPAppStoreInfo;

@interface IESLiveGameCPAdCardEnterRoomModel : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *activeLink;
@property (retain, nonatomic) IESLiveGCPAppStoreInfo *appStoreInfo;
@property (nonatomic) long long gameCPAdCardType;

- (id)initWithDict:(id)a0 gameName:(id)a1 gameId:(id)a2;
- (void).cxx_destruct;

@end
