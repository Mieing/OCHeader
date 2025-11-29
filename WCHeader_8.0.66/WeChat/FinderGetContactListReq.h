@class BaseRequest, NSString, FinderContactExtRelationInfo, FinderBaseRequest, NSMutableArray, FinderContactWxFriendInfo;

@interface FinderGetContactListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *finderUsernameList;
@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *msgContactList;
@property (retain, nonatomic) NSMutableArray *fansContactList;
@property (retain, nonatomic) NSMutableArray *commentContactList;
@property (retain, nonatomic) NSMutableArray *commentLikeContactList;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) NSMutableArray *strangerInfos;
@property (retain, nonatomic) NSMutableArray *favContactList;
@property (retain, nonatomic) NSString *wxUsername;
@property (retain, nonatomic) FinderContactExtRelationInfo *extRelInfo;
@property (retain, nonatomic) FinderContactWxFriendInfo *friendInfo;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int refCommentScene;

+ (void)initialize;

@end
