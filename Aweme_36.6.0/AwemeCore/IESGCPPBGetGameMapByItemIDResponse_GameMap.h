@class NSString;

@interface IESGCPPBGetGameMapByItemIDResponse_GameMap : GPBMessage

@property (copy, nonatomic) NSString *mapId;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *kw;
@property (nonatomic) long long latestPlayTime;
@property (copy, nonatomic) NSString *mapDescription;
@property (copy, nonatomic) NSString *mapLink;
@property (copy, nonatomic) NSString *mapTag;
@property (nonatomic) long long mapState;

+ (id)descriptor;

@end
