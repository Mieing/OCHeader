@class NSString, NSDictionary;

@interface IESGCPXPlayServiceGameInfo : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIconUrl;
@property (copy, nonatomic) NSString *gameLoadingImageUrl;
@property (copy, nonatomic) NSString *gpEnterFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *mapId;
@property (copy, nonatomic) NSString *mapName;
@property (copy, nonatomic) NSString *unifiedGameId;
@property (nonatomic) long long gameOrientation;
@property (copy, nonatomic) NSDictionary *jumpEditorPageConfig;
@property (copy, nonatomic) NSString *startType;

- (void).cxx_destruct;

@end
