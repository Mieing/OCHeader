@class FinderUserPageReqPreload, BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long maxId;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int needFansCount;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned int tabType;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long refLiveObjectId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *liveNoticeId;
@property (nonatomic) unsigned long long fromCollectionId;
@property (nonatomic) unsigned int fromNewTab;
@property (retain, nonatomic) NSData *sectionBuffer;
@property (retain, nonatomic) FinderUserPageReqPreload *preload;
@property (retain, nonatomic) NSString *opensdkAppid;
@property (nonatomic) unsigned int direction;
@property (retain, nonatomic) NSData *upLastbuffer;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
