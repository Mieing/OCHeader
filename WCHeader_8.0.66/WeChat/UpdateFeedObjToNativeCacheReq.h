@class NSMutableArray;

@interface UpdateFeedObjToNativeCacheReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int funId;
@property (nonatomic) unsigned long long requestId;

+ (void)initialize;

@end
