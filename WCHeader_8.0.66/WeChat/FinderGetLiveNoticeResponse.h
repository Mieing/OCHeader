@class FinderLiveNoticeListInfo, FinderLiveNoticeInfo, FinderGetLiveNoticeResponse_FinderLiveStatusInfo, FinderContact, BaseResponse;

@interface FinderGetLiveNoticeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) FinderGetLiveNoticeResponse_FinderLiveStatusInfo *liveStatusInfo;
@property (retain, nonatomic) FinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (nonatomic) unsigned int memberStatus;

+ (void)initialize;

@end
