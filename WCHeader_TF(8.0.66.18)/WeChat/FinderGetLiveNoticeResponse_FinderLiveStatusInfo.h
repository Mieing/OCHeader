@class NSString;

@interface FinderGetLiveNoticeResponse_FinderLiveStatusInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int liveStatus;

+ (void)initialize;

@end
