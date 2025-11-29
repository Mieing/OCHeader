@class NSString, FinderObject;

@interface NewLifeMergeOrUpdateFeedReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) BOOL isFakeObject;
@property (nonatomic) BOOL requestServer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *clientUdfKv;
@property (retain, nonatomic) NSString *connectTagName;

+ (void)initialize;

@end
