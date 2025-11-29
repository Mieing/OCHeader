@class FinderUserPageReqPreload, NSString, JsApiSourceInfo, NSData;

@interface WCFinderUserPageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *bizUsername;
@property (copy, nonatomic) NSString *pageMd5;
@property (copy, nonatomic) NSString *refObjectId;
@property (nonatomic) unsigned long long maxTid;
@property (nonatomic) BOOL needFansCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *upBuffer;
@property (nonatomic) unsigned long long reportScene;
@property (nonatomic) int tabType;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) int enterType;
@property (nonatomic) int commentScene;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long refLiveObjectId;
@property (copy, nonatomic) NSString *liveNoticeId;
@property (nonatomic) unsigned long long fromCollectionID;
@property (nonatomic) BOOL requestFansCount;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL fromNewTabList;
@property (retain, nonatomic) FinderUserPageReqPreload *preloadBypass;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (copy, nonatomic) NSString *preloadIgnoreTid;
@property (copy, nonatomic) NSString *openSDKAPPID;
@property (nonatomic) unsigned int direction;
@property (nonatomic) unsigned long long cgiFlag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
