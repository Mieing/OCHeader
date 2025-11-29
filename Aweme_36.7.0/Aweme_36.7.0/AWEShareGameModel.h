@class NSString, NSDictionary;

@interface AWEShareGameModel : NSObject <IESIMShareGameModelProtocol>

@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDes;
@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL fromMoreSelectedFriendlist;
@property (copy, nonatomic) NSString *gameCoverUrl;
@property (copy, nonatomic) NSString *gameQuery;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameDes;
@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL fromMoreSelectedFriendlist;
@property (copy, nonatomic) NSString *gameCoverUrl;
@property (copy, nonatomic) NSString *shareToStoryImageUrl;
@property (copy, nonatomic) NSString *gameQuery;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *ugURL;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *enterMethod;

- (id)initWithShareAppInfo:(id)a0;
- (void).cxx_destruct;

@end
