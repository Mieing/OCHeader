@class BaseRequest, NSString, FinderLivePermissionVerifyInfo, NSMutableArray;

@interface FinderGetLiveNoticeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned int lastNoticeStartTime;
@property (nonatomic) unsigned int order;
@property (nonatomic) unsigned int noticeAggregateType;
@property (retain, nonatomic) NSMutableArray *noticeAggregateTypeList;
@property (nonatomic) unsigned int requestScene;

+ (void)initialize;

@end
