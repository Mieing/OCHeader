@class NSString;

@interface OpenFinderProfilePageReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) BOOL enableAuthor;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) BOOL locateToNewlifeTab;
@property (retain, nonatomic) NSString *searchClickId;
@property (nonatomic) BOOL isBizContact;
@property (nonatomic) BOOL hasLive;
@property (nonatomic) unsigned long long liveFeedId;

+ (void)initialize;

@end
