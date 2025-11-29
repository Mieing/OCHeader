@interface WxGamePluginLastMsgInfo : NSObject

@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int leftCount;
@property (nonatomic) unsigned int msgCountToLoad;

- (id)init:(unsigned int)a0 createTime:(unsigned int)a1 leftCount:(unsigned int)a2 msgCountToLoad:(unsigned int)a3;

@end
