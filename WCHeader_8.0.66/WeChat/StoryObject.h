@class NSString, SKBuiltinBuffer_t, NSMutableArray;

@interface StoryObject : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int objType;
@property (retain, nonatomic) SKBuiltinBuffer_t *objDesc;
@property (nonatomic) unsigned int commentCount;
@property (retain, nonatomic) NSMutableArray *commentList;
@property (nonatomic) unsigned int bubbleCount;
@property (retain, nonatomic) NSMutableArray *bubbleList;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int visiableSelfOnly;
@property (nonatomic) unsigned int isFeatured;
@property (nonatomic) unsigned int featuredTime;
@property (nonatomic) unsigned int blackListCount;
@property (retain, nonatomic) NSMutableArray *blackList;
@property (nonatomic) unsigned int groupUserCount;
@property (retain, nonatomic) NSMutableArray *groupUser;
@property (nonatomic) unsigned int visitorCount;
@property (retain, nonatomic) NSMutableArray *visitorList;

+ (void)initialize;

@end
