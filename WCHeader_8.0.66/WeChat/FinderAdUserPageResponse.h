@class NSData, NSString, OriginalEntranceInfo, BaseResponse, NSMutableArray, FinderContact, FinderUserInfo, FinderPreloadInfo, FinderNicknameVerifyInfo;

@interface FinderAdUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) FinderUserInfo *finderUserInfo;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int feedsCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo;
@property (nonatomic) unsigned int fansCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int friendFollowCount;
@property (retain, nonatomic) NSMutableArray *userTags;
@property (nonatomic) unsigned int originalEntranceFlag;
@property (retain, nonatomic) OriginalEntranceInfo *entranceInfo;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSMutableArray *liveObjects;
@property (nonatomic) unsigned int privateLock;
@property (retain, nonatomic) NSString *relatedStreamWording;

+ (void)initialize;

@end
